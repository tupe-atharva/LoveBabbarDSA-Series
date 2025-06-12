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

void insertAtTail(node* &tail , int d){
    node* temp = new node(d);
    tail -> next = temp; // point initial tail's address to temp, ie. newly created node.
    tail = temp; // update tail to the newly created node ie. temp.
}

void deleteAtNode(node* &head ,int position){
    // Samaj 4th poistion ka element delete karna hai, toh 3rd position tak ja and uska next pointer 4th ki jagah 5th position ko point karva.

    node *temp = head;
    int count = 1;
    while(count < position - 1){
        temp = temp -> next;
        count ++;
    }// This while loop puts temp to the preceeding position of the position where we have to DELETE the element.

    node *currentElement = temp -> next;
    // Set the next element of temp to current Element as we have to delete it.

    temp -> next = currentElement -> next;

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
    
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;

    insertAtTail(tail,12);
    insertAtTail(tail,13);
    insertAtTail(tail,14);
    insertAtTail(tail,15);
    insertAtTail(tail,16);
    cout << endl;
    print(head);
    deleteAtNode(head , 4);
    print(head);

    return 0;
}