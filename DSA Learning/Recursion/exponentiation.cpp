// Given a and b, calculate a^b using recursion.

#include<iostream>
using namespace std;

int exponent (int a , int b){

    // This is the optimized way of calculating the exponent, theory is in DSA book 2.

    // Base Case 1 - when b == 0, return 1
    if( b == 0 )
        return 1;

    // Base Case 2 : when power is 1, return a.
    if( b == 1)
        return a;

    // Recursive Call :
    int ans = exponent (a , b/2);

    if (b%2 == 0) // ie. b is even
        return ans * ans;
    else // ie. b is odd
        return a * ans * ans;
}

int main(){ 
 
    int a,b;
    cout << endl;
    cout << "Enter the value of a : " ;
    cin >> a;
    cout << "Enter the value of b : " ;
    cin >> b;
    cout << endl;
    cout << "The answer is : " << exponent(a,b) << endl ;
    cout << endl;
 
    return 0;
}