// Given a signed 32-bit integer x, return x with its digits reversed. 
//If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.


#include<iostream>
#include<math.h>
using namespace std;
int main(){

cout<<"Enter an integer"<<endl;
int n,digit;
int reverse = 0;
cin>>n;
int i = 0;
// int int_max = pow(2,31) - 1 ;
// int int_min = -(pow(2,31));
// the variables INT_MAX and INT_MIN are already defined in C++.
while (n!=0)
{
    digit = n%10;
    reverse = (reverse * 10) + digit;
    // Here we will get a runtime error when the value in the reverse variable goes above the permissible limit, thus we need to set a limit according to the limit of the integer data type ie (2^^31 - 1 to -2^^31)
    n = n/10;
    i++;
}

if( reverse >= INT_MAX/10 || reverse <= INT_MIN/10 ){
    cout<<"The number has gone out of range"<<endl;
}
else{
 cout<<"The reversed number is : "<<reverse<<endl;
}


//             if( reverse > (pow(2,31)-1) | reverse < -(pow(2,31)))
//             {
//             cout<<"The number has gone out of range"<<endl;
//             }
//             else{
//             cout<<"The reversed number is : "<<reverse<<endl;
//             }
// 1234Did this to satisfy the second condition but this has to be done inside the loop while using the equation itself.

return 0;
}