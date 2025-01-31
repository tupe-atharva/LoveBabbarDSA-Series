// writing a function to swap numbers.

#include<iostream>
using namespace std;
 

int swap (int a , int b){

    int temp; // creating a temporary variable
    // remember - RHS value goes in LHS.
    temp = a;
    a = b;
    b = temp;
    return a;
} 
int main(){
int a = 3, b = 5;
int new_a = swap (a,b);
cout<<new_a<<" "<<b<<endl;
// thus a is swapped with the value 5.

// Same swapping can be done with arrays too, instead of a and b we will use array indexes.
return 0;
}