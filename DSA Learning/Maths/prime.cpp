// Check wheter entered number is prime

#include<iostream>
using namespace std;
int main(){

cout<<"Enter the number : "<<endl;
int n;
cin>>n;


//LOGIC : the entered number 'n' should only be divisible by 1 and itself
// all the numbers between them ie. 2-(n-1), should not give 0 for modulus operation for n to be a prime number.


// for (int i = 2; i <= n-1; i++)
// {
//     if( n%i == 0){
//         cout<<"The entered number is not Prime"<<endl;
//         break; // so that the message is not printed for all iterations
//     }
//     else{
//         cout<<"The entered number is Prime"<<endl;
//         break; // so that the message is not printed for all iterations
//     }
// }

//this is a wrong approach as when number is divisible or not divisible by a number in the loop, it is directly printing the output without checking the next numbers.

// Eg. for 6 : 1,2,3,4,5,6.
// after checking for 2 the above approach would simply break the if statement and say that the number is prime without checking the next numbers ie, 3,4,5,6.


//APROACH 2 : create a boolean variable - isPrime and set it to 1 ie. true. inside the for loop only check the condition for not being a prime number. If n gets completely divided by some number, update the isPrime variable to 0 ie. false and break out of the loop.
// outside the loop use a if else block to check the value of isPrime variable and print the output accordingly



bool isPrime = 1;

 for (int i = 2; i <= n-1; i++){

    if(n%i==0){
        isPrime = 0;
        // ie. if for any number bw 2-(n-1), if n%i==0 then update the isPrime to false and break out of the loop.
        break;
    }
 }

if (isPrime == 1)
{
   cout<<"The entered number is Prime"<<endl;
}
else{
    cout<<"The entered number is NOT Prime"<<endl;
}



return 0;
}