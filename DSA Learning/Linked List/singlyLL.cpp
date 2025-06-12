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

int main(){ 
 
    // Creating object of type node dynamically.
    node *node1 = new node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    return 0;
}