// WAP to reverse a given LL.

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class node{
    public : 
        int data;
        node *next;

        node(int data){
            this -> data = data;
            this -> next = NULL;
        }
};

void insertNode(node* &head , int position , int value){
    node* temp = head;
    int count = 1;
    while(count < position - 1){
        temp = temp -> next;
        count ++;
    }
    node *nodeToInsert = new node(value);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}

void print(node* &head){
    node *temp = head;
    while(temp != NULL){
        cout << temp -> data << " " ;
        temp = temp -> next;
    } 
    cout << endl;
}

// Recursive function to reverse a Linked List.
void reverseLL(node* &head , node* &curr, node* & prev){
   
    // Base Case :
    if(curr == NULL){
        head = prev;
        return;
    }
    
    // Processing :
    node *forward = curr -> next;

    // Recursive Relation :
    reverseLL(head, forward, curr);
    curr -> next = prev;
    
}

int main(){ 
 
    node *node1 = new node(10);
    node *head = node1;
    insertNode(head , 2 , 20);
    insertNode(head , 3 , 30);
    insertNode(head , 4 , 40);
    insertNode(head , 5 , 50);
    print(head);
    
    node *prev = NULL;
    node *curr = head;

    reverseLL (head , curr , prev);
    print(head);

    return 0;
}