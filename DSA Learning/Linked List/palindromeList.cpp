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

// Function to insert an element at the given index in a LL.
void insertAtPositon(node* &tail , node* &head , int position , int data){

    // Check if entered positon is head, then call the insertAtHead function and place new element at 1st position ie. head.
    if(position == 1){
        insertAtHead(head, data);
        return;
        // use return as if the condition is true, we dont want the rest of the function to be invoked and get returned from here itself.
    }

    node* temp = head;
    int count = 1;
    while(count < position - 1){
        temp = temp -> next;
        count++;
    }
    // This while loop puts temp to the preceeding position of the position where we have to insert the element.

    // What if the position is the Tail ?
    // condition for tail is that it points to NULL
    if(temp -> next == NULL){
        insertAtTail(tail ,data);
        return;
        // In this way element is inserted at the end and the tail is also updated to be the new element.
    }

    // Create a new node for new data to insert.
    node *nodeToInsert = new node(data);
   
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
    // The sequence of above 2 statements should not change.
}

// Functiont to traverse and print a LL.
void print(node* &head){

    node* temp = head;
    while (temp != NULL){
        cout << temp -> data << " "; // Print the value of data at location pointed by temp.
        temp = temp -> next; // Update temp to next location.
    } cout << endl; 
}


class Solution {
public:
    node* findMiddle(ListNode* &head) {
        ListNode* curr = head->next;
        ListNode* prev = head;

        while (curr != NULL) {
            curr = curr->next;
            if (curr != NULL) {
                curr = curr->next;
            }
            prev = prev->next;
        }
        return prev;
    }

    int getLength(ListNode* &head) {
        ListNode *temp = head;
        int length = 0;
        while (temp != NULL) {
            temp = temp->next;
            length++;
        }
        return length;
    }

    ListNode* reverse(ListNode* &middle) {
        ListNode *prev = NULL;
        ListNode *forward = NULL;
        ListNode *curr = middle;
        while (curr != NULL) {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {

        if (head->next == NULL) {
            return true;
        }
        if (head->next->next == NULL) {
            if (head->val == head->next->val) {
                return true;
            } else {
                return false;
            }
        }

        ListNode* middle = findMiddle(head);
        int length = getLength(head);

        if (length % 2 == 0) {
            middle = reverse(middle);
        }
        else {
            middle = reverse(middle->next);
        }

        ListNode *temp = head;

        if (length % 2 == 0) {
            while (middle != NULL) {
                if (temp->val == middle->val) {
                    temp = temp->next;
                    middle = middle->next;
                }
                else {
                    return false;
                }
            }
        }
        else {
            while (middle != NULL) {
                if (temp->val == middle->val) {
                    temp = temp->next;
                    middle = middle->next;
                }
                else {
                    return false;
                }
            }
        }

        return true;
    }
};


int main(){ 
    
    node *node1 = new node(1);
    
    node *head = node1;
    node *tail = node1;

    insertAtPositon(tail , head , 1, 1);
    insertAtPositon(tail , head , 2, 2);
    insertAtPositon(tail , head , 3, 3);
    insertAtPositon(tail , head , 4, 2);
    print(head);
    cout << endl;

    return 0;
}