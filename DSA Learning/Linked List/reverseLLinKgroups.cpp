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

node* reverse(node* head , int k){
    
    // Base Case :
    if(head == NULL){
        return NULL;
    }

    // Processing :
    // Using a recursive approach to reverse in K-groups.
    node *curr = head;
    node *next = NULL;
    node *prev = NULL;

    int count = 0;
    while(curr != NULL && count < k){
        next = curr -> next ;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // Recursive Call :
    if(next != NULL){
        head -> next = reverse(next,k);
    }

    return prev;
}

void print(node* &head){
    node *temp = head;
    while(temp != NULL){
        cout << temp -> data << " " ;
        temp = temp -> next;
    } 
    cout << endl;
}

int main(){

    int k = 2; // ie. reverse in groups of 2;
    node *node1 = new node(10);
    node *head = node1;
    insertNode(head , 2 , 20);
    insertNode(head , 3 , 30);
    insertNode(head , 4 , 40);
    insertNode(head , 5 , 50);
    insertNode(head , 6 , 60);
    
    print(head);
    node *ans = reverse(head , k); // ans stores the prev node which the recursive function will return.
    
    print(ans);

}