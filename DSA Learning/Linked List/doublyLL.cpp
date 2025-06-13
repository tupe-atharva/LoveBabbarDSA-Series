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

int main(){ 
 
    node *node1 = new node(10);
    node *head = node1;
    print(head);

    cout << getLength(head) << endl;
    return 0;
}