#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class node{
    public:
        int data;
        node *next;
        // node type ka pointer jo next node ko point karta hai

        // Using constructor to set the value of the data when obj is created.
        // Along with setting the value of next pointer to NULL.
        node(int data){
            this -> data = data ;
            this -> next= NULL;
        }

        // Destructor
        ~node(){
            if (this -> next != NULL){
               delete next;
               next = NULL;
            }
            cout << "Memory is free for Node with data " << this -> data << endl;
        }
};

void insertNode(node* & tail , int data, int element){ 
    // here 'element' refers to the element of the LL after which we are trying to insert the new node with passed 'data'.

    // Edge case when the list is empty.
    if (tail == NULL){ 
        // Just make a new node and mark it as the tail.
        node *temp = new node(data);
        tail = temp;
        temp -> next = temp; // this line ensures that the 1 new node points to itself.
    }
    
    else{
        node* temp = tail; // We use only tail in a circular LL.
        int count = 1;
        while (temp -> data != element){
            temp = temp -> next;
            count++;
        }

        node *nodeToInsert = new node(data);
        nodeToInsert -> next = temp -> next;
        temp -> next = nodeToInsert;
    }
}

void print(node* &head){

    node* temp = head;
    while (temp != NULL){
        cout << temp -> data << " "; // Print the value of data at location pointed by temp.
        temp = temp -> next; // Update temp to next location.
    } cout << endl; 
}

int main(){ 
    
    node *node1 = new node(10);
    node *tail = node1;

    insertNode(tail , 69 , 10); // this line adds node with data 69 after node with data 10.
    insertNode(tail , 78 , 69);
    insertNode(tail , 99 , 78);
    print(tail);

    cout << "Tail : " << tail -> data << endl;
    return 0;
}