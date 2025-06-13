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
    // Create a new node
    node *temp = new node(data);
    temp -> next = head;
    head -> prev = temp; // this line ensures that prev of the current head points to temp and thus we get double suded connection.
    head = temp; 
}
// this function puts the new element to the left of the existing element.
// ie. 22 -> 10,22 -> 11,10,22 ...

void insertAtTail(node* &tail , int data){
    node *temp = new node(data); // Creating the new node.
    temp -> prev = tail; // connect new node's previous to the existing elem.
    tail -> next = temp; // connect existing elem's next to new node. 
    tail = temp; // update the tail to be the new node.
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
    cout << "Length is : "<< getLength(head) << endl;

    return 0;
}