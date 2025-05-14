#include<iostream>
using namespace std;

int fact (int n){

    // Base case - when n = 0, stop th recursion
    if (n == 0)
    {
       return 1;
    }
    
    // fact(n) = n * fact(n-1)
    // This is the recursive relation in factorial.
    
    // The following statement is an example of recursion as the functino fact is called within itself.
    return n * fact(n-1);
}


int main(){ 
 
    int n;
    cout << "Enter the value of n : " ;
    cin >> n;

    cout << "The factorial is : " << fact(n) << endl;
 
    return 0;
}