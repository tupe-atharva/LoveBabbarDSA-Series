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
        node(int data){
            this -> data = data;
            this -> next = NULL;
        }
};

void insertAtHead(node* &head, int d){

    // Create new node using class node and pass value of data, next pointer is set to NULL initially
    node *temp = new node(d); 

    // Set pointer of this newly created node - temp to head.
    temp -> next = head;

    // Increment head to point to the newly created node.
    head = temp; 
}

void insertAtTail(node* &tail , int d){
    node* temp = new node(d);
    tail -> next = temp; // point initial tail's address to temp, ie. newly created node.
    tail = temp; // update tail to the newly created node ie. temp.
}


// Functiont to traverse and print a LL.
void print(node* &head){

    node* temp = head;
    while (temp != NULL){
        cout << temp -> data << " "; // Print the value of data at location pointed by temp.
        temp = temp -> next; // Update temp to next location.
    } cout << endl; 
}


int main(){ 
 
    // Creating object of type node dynamically.
    node *node1 = new node(10);
    //cout << node1 -> data << endl;
    //cout << node1 -> next << endl;
    node *head = node1;
    node *tail = node1;
    //print(head); // Prints initial value present at head, ie. 10.

    // insertAtHead(head,12); // Inserts 12 to the LL and moves head pointer to 12.
    // insertAtHead(head,34); // Inserts 12 to the LL and moves head pointer to 34.
    // insertAtHead(head,36); // Inserts 12 to the LL and moves head pointer to 36.
    // insertAtHead(head,89); // Inserts 12 to the LL and moves head pointer to 89.
    // insertAtHead(head,69); // Inserts 12 to the LL and moves head pointer to 69.
    //print(head); // Prints final LL (69 points to NULL in the end)
    
    // Inserting at head will give the reverse order of the LL.
    // In order to get the correct order, we should insert at tail and update tail to be the last element.

    insertAtTail(tail,12);
    insertAtTail(tail,13);
    insertAtTail(tail,14);
    insertAtTail(tail,15);
    insertAtTail(tail,16);
    print(head);
    return 0;
}