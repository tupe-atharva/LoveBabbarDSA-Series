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
        // there can also be a case when the list is empty.

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
        // Assuming that element is present in the LL, after the while loop, temp will be representing the node which has element, and then we will add node next to it.
        node *nodeToInsert = new node(data);
        nodeToInsert -> next = temp -> next;
        temp -> next = nodeToInsert;
    }
}

// void print(node* tail){
//     node* temp = tail;
//     // while (tail -> next != temp){
//     //     cout << tail -> data << " "; // Print the value of data at location pointed by temp.
//     //     tail = tail -> next; // Update temp to next location.
//     // } cout << endl;

//     // Use a do-while loop instead - as the above logic will not work for a single element in the LL, do-while loop ensures that minimum one iteration is done then while condition is checked for next iterations.

//     do{
//         cout << temp -> data << " " ; // print the tail's data.
//         temp = temp -> next; // move to next tail.
//     } while(tail != temp); 
//     cout << endl;
//     // should happen untill tail's next element is not temp, ie starting position pe wapas aagaye toh bus karo !
// }

void print(node* tail) {
    if (tail == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    node* temp = tail;

    do {
        cout << temp -> data << " ";  // Print the data
        temp = temp -> next;          // Move to next node
    } while (temp != tail);           // Stop when we come back to the starting node

    cout << endl;
}

void deleteNode(node* & tail , int value){

    // Empty List :
    if(tail == NULL){
        cout << "List is Empty " << endl;
        return ;
    }
    
    else{
        // Non-empty & assuming value is present in the CLL;
        // deleting on the basis of value of element.
        // Reach the preceeding node of the node to delete.
        node *prev = tail;
        node *curr = prev -> next;

        // Handling single node CLL :
        if(curr == prev){
            tail = NULL;
        }

        while (curr -> data != value){
            prev = curr;
            curr = curr -> next;
        }// this loop puts curr on the given value & prev on the preceeding node.
        prev -> next = curr -> next;
        // Edge case while deleting the first element, as tail pointer gets deleted too then.
        if(tail == curr){
            tail = prev;
        }
        // Without above if case :
        // 10 69 101 78 99 
        // Memory is free for Node with data 10
        // zsh: segmentation fault 

        // With edge Case :
        // 10 69 101 78 99 
        // Memory is free for Node with data 10
        // 99 69 101 78 
        // Tail : 99

        curr -> next = NULL;
        delete curr; // Free up memory.
    }
   

}

bool checkCircular(node *head){

    // 0 elements in LL.
    if(head == NULL)
        return true;
        // when no element is present we consider the list to be circular.
   
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
    
    node *node1 = new node(10);
    node1 -> next = node1;
    // When creating the very first node manually, you must point it to itself:
    node *tail = node1;

    insertNode(tail , 69 , 10); // this line adds node with data 69 after node with data 10.
    insertNode(tail , 78 , 69);
    insertNode(tail , 99 , 78);
    //print(tail);
    insertNode(tail , 101 , 69);
    print(tail);
    // deleteNode(tail , 10);
    // print(tail);

    //cout << "Tail : " << tail -> data << endl;
    if(checkCircular(tail))
        cout << "The LL is Circular " << endl;
    else    
        cout << "The LL is NOT Circular " << endl;
        
    return 0;
}