// given AP = 3 * n + 7, return the value of AP by taking n as input - Use functions.

int ap (int n){ //function signature
    //function body
    int ans = (3*n) + 7;
    return ans; // return statement.
}


#include<iostream>
using namespace std;
int main(){
cout<<"Enter the value of n : "<<endl;
int n ;
cin>>n;
int answer = ap(n); // function call and pass n by value.
cout<<"The answer of the Arithmetic Progression is : "<<answer<<endl;

return 0;
}

