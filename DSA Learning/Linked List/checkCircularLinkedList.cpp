// Given a LL, check whether it is circular or not

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class node{
    
    public:
        int data;
        node *next = NULL;
        node(int d){
            this -> data = d;
        }
};

void insert(node* &head , int data){

    head -> next = new node(data);
    head = head -> next;
}

void print(node* &head){
    node *temp = head;
    while(temp != NULL){ // condtition should be jab tak temp NULL nahi ho jata, not temp -> next, in that case, last element wont be printed.
        cout << temp -> data << " " ;
        temp = temp -> next;
    }
    cout << endl;
    // cout << temp -> data << "  "  << temp -> next << endl;
}

void checkCircular(node *head){



}

int main(){ 
 
    node *head = new node(10);
    node *temp = head;
    //cout << head -> data << endl;
    insert (temp, 20);
    insert (temp, 30);
    insert (temp, 40);
    insert (temp, 50);
    // cout << temp -> data << endl;
    // cout << head -> data << endl;
    print(head);

    return 0;
}