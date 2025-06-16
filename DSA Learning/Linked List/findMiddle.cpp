// WAP to find the middle of a given LL.
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

int getLength(node* &head){
    int length = 0;
    node *temp = head;
    while (temp != NULL){
        temp = temp -> next;
        length++;
    }
    return length;
}

int findMiddle(node* &head){

    int length = getLength(head);
    node *ans = head; 
    int count = 1;
    while(count < (length/2) + 1){
        // middle elem = (length/2) + 1);
        ans = ans -> next;
        count ++;
    }
    return ans -> data;
}

int main(){ 
 
    node *node1 = new node(10);
    node *head = node1;
    insertNode(head , 2 , 20);
    insertNode(head , 3 , 30);
    insertNode(head , 4 , 40);
    insertNode(head , 5 , 50);
    insertNode(head , 5 , 60);
    print(head);

    cout << "The Middle element is : " << findMiddle(head) << endl;
    return 0;
}