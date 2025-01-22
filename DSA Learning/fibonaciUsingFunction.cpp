// Write a function that returns the nth fibonacci number

// 0 1 1 2 3 5 8 13 ...

#include<iostream>
using namespace std;

int fibonacci (int n){
   
    int a=0,b=1;
    for (int i= 3; i<=n; i++){ // dry run to see why i started i from 3. (HINT : because a and b are already there, so we need to compensate for the extra 2 iterations happening)
        int nextNumber = a + b;
        a=b;
        b=nextNumber;  
    }
    return b;
}

int main(){
cout<<"Enter the value of n : "<<endl;
int n;
cin>>n;

int answer = fibonacci(n);
cout<<"The nth fibonacci number is : "<<answer<<endl;

return 0;
}