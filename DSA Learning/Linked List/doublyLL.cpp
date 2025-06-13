#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class node{

    public :
        int data;
        node *next;
        node *prev;

    // Constructor :
    node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

};

void print(node* &head){
    node *temp = head;
    while(temp != NULL){
        cout << temp -> data << " " ;
        temp = temp -> next;
        // Temp ka data print karke usko aage badha do !
    }
    cout << endl;
}

int getLength(node* &head){
    int length = 0;
    node *temp = head;
    while(temp != NULL){
        length++;
        temp = temp -> next;
    }
    return length;
}

// Function to insert an element at the head of the doubly LL.
void insertAtHead(node* & head, int data){

    // Handling Empty list.
    if(head == NULL){
        // create a new node and set it as the head.
        node *temp = new node(data);
        head = temp;
    }
    else{
        // Create a new node
        node *temp = new node(data);
        temp -> next = head;
        head -> prev = temp; // this line ensures that prev of the current head points to temp and thus we get double suded connection.
        head = temp;
    }
}
// this function puts the new element to the left of the existing element.
// ie. 22 -> 10,22 -> 11,10,22 ...

void insertAtTail(node* &tail , int data){
    
    // Handling Empty list.
    if(tail == NULL){
        node *temp = new node(data);
       tail = temp;
    }
    else{
        node *temp = new node(data); // Creating the new node.
        temp -> prev = tail; // connect new node's previous to the existing elem.
        tail -> next = temp; // connect existing elem's next to new node. 
        tail = temp; // update the tail to be the new node.
    }
}

void insertAtPosition(node* &head , node* &tail, int position, int data){

    // INSERTING AT FIRST POSITION ie. HEAD.
    if(position == 1){
        insertAtHead(head, data);
        return;
        // use return as if the condition is true, we dont want the rest of the function to be invoked and get returned from here itself.
    }

    // First reach (postion - 1) wala node
    int count = 1;
    node*temp = head;
    while(count < position - 1){
        temp = temp -> next;
        count++;
    }
   

    // INSERTING AT LAST POSITION ie. TAIL.
    // Condition for tail is that it points to NULL.
    if(temp -> next == NULL){
        insertAtTail(tail ,data);
        return;
        // In this way element is inserted at the end and the tail is also updated to be the new element.
    }

    node *nodeToAdd = new node(data); // Create new node with the data as passed to be placed at the given position.

    nodeToAdd -> next = temp -> next;
    temp -> next -> prev  = nodeToAdd;
    temp -> next = nodeToAdd;
    nodeToAdd -> prev = temp;
    
}

int main(){ 
 
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    
    // Inserting from Head Side.
    // insertAtHead(head , 22);
    // insertAtHead(head , 34);
    // insertAtHead(head , 56);

    // Inserting from Tail Side.
    insertAtTail(tail , 20);
    insertAtTail(tail , 30);
    insertAtTail(tail , 40);

    print(head);
    insertAtPosition(head, tail , 2 ,768 );
    insertAtPosition(head, tail , 1 ,101 );
    insertAtPosition(head, tail , 7 ,768 );
    print(head);

    //cout << "Length is : "<< getLength(head) << endl;

    return 0;
}