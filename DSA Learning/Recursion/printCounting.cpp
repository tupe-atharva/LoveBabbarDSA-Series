// We have to print the counting from given number to 1.

#include<iostream>
using namespace std;

void counting (int n){
    // Tail recursion - prints from n to 1 backwards.
    // Base case .
    if (n == 0)
    {
       return ;
    }

    // Processing.
    cout << n << endl;

    // Recursive relation.
    counting(n-1);

    // -------------------------------------------------------------

    // Head Recursion - prints from 1 to n.

    // // Base case .
    // if (n == 0)
    // {
    //    return ;
    // }

    // // Recursive relation.
    // counting(n-1);

    // // Processing.
    // cout << n << endl;


    
}


int main(){ 
 
    int n = 5;
    counting(n);
 
    return 0;
}