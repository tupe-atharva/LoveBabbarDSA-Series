// Check wheter entered number is prime

#include<iostream>
using namespace std;
int main(){

cout<<"Enter the number : "<<endl;
int n;
cin>>n;


//LOGIC : the entered number 'n' should only be divisible by 1 and itself
// all the numbers between them ie. 2-(n-1), should not give 0 for modulus operation for n to be a prime number.


for (int i = 2; i <= n-1; i++)
{
    if( n%i == 0){
        cout<<"The entered number is not Prime"<<endl;
        break; // so that the message is not printed for all iterations
    }
    else{
        cout<<"The entered number is Prime"<<endl;
        break; // so that the message is not printed for all iterations
    }
}



return 0;
}