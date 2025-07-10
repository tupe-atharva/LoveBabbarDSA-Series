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

bool checkCircular(node *head){

    // 0 elements in LL.
    if(head == NULL)
        return true;
        // when no element is present we consider the list to be circular.
    

    // 1 element in LL. --> this case is handled in more than 1 element's case.

    // More than 1 element.
    node *temp = head -> next;
    // use this temp pointer from 2nd element.

    while(temp != NULL && temp != head){
        temp = temp -> next;
        // temp == NULL -- indicates the end of list, thus not circular.
        // temp == head -- indicated that pointer reached back to head, so list is circular.
    }
    
        
    if(temp == head)
        return true; // circular

    return false; // not circular
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
    // temp -> next = head;
    print(head);
    
    if(checkCircular(head)){
        cout << "The given LL is circular" << endl;
    }
    else{
         cout << "The given LL is NOT circular" << endl;
    }
    
    return 0;
}