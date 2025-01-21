//WAP To convert entered BINARY number to DECIMAL number

#include<iostream>
#include<math.h>
using namespace std;
int main(){


int n ;
cout<<"Enter the Binary number "<<endl;
cin>>n;

//APPROACH : Run a loop untill n becomes 0, in every iteration remove the last bit by modulus with 10. Multiply this bit with 2^^i where i starts from 0 and goes upto the number of bits ie. 32 times for int.

int bit;
int ans = 0;
int i = 0; // initialize i to 0.

while(n!=0){
    bit = n%10;
    //here you cannot use n&1 as only we know that the entered number is binary, the compiler is treating it as a integer itself, so if you input 0011, the compiler will treat it like decimal 11 and convert it to binary of 11 to remove the last bit. So it is better to simply remove the last digits of the entered number as we have already asked the user to enter the number in binary form.
    // cout<<bit<<endl;
    ans = (bit * pow(2,i)) + ans ; // do + ans to add the ans of the last iteration.
    // n = n>>1; // right shift n to get the next bits in sequence.
    i++;
    n = n/10;
    // cout<<ans<<endl;
}
cout<<"The converted decimal number is "<<ans<<endl;
return 0;
}

//same can be achieved by using an if statement - this approach is computationally more efficient as when the extracted bit is 0, then no calculation will be done.
// if (bit==1){
// ans = ans + pow(2,i)
// }