//WAP To convert entered decimal number to binary number

//APPROACH : run a loop untill the value of n becomes 0. Calculate the last bit of n by using the bitwise and operator ie. n&1. Initialize ans variable to 0 and use the formula --> 
// ans = bit * pow(10,i) + ans. Print the value of ans outside the loop to get the binary representation of the entered decimal number.

#include<iostream>
#include<math.h>

using namespace std;
int main(){

int ans = 0;
int n ;
cout<<"Enter the Decimal number"<<endl;
cin>>n;
int i = 0;
while (n!=0)
{
    int bit = n & 1;
    ans = (bit * pow(10,i)) + ans;
    n = n>>1; //right shift the bit representation of n to get the next bit in line.

    // use the formula -- ans = (digit * pow(10,i) + ans ) to print the reverse of the enterd number. But here instead of using BITWISE AND operation you should modulus with 10 to get the decimal digits of the entered number.
    i++;
}

cout<<"The binary conversion of "<<n<<" is : "<<ans<<endl;


return 0;
}