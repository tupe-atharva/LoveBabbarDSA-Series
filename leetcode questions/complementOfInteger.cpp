// The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

// For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
// Given an integer n, return its complement.

//APPROACH 1 : get the last bit of the entered integer by using n&1. Check if the last bit is 1 or 0 and flip accordingly using the negation operator. Store the flipped bits in a new variable and return it's decimal value by using a loop and multiplying bit value with 2^^i and adding it ie. --> summation[decimal(i)= bit * 2^^i].

//WRONG APPROACH - TOO LENGHTY.

// #include<iostream>
// using namespace std;
// int main(){

// cout<<"Enter an Integer : "<<endl;
// int n;
// cin>>n;
// int bit,ans;

// while (n!=0)
// {
//     bit = n&1;
//     if (bit == 1)
//     {
//       ans =  ~bit;
//     }
//     else{
//       ans = bit;
//     }

//     n = n>>1; // right shift n to get the next bit in sequence.
//     cout<<ans<<endl;
// }


// return 0;
// }



//APPROACH 2 : instead of extracting single single bit and right shifting SIMPLY USE THE NEGATION OPERATION ON THE INPUT NUMBER. In this way all the bits will be fliped.
// Eg. 5 ie. 00000...0101
// ~5 = 1111...1010
// the binary bits are now flipped, you have to now convert this to decimal. But you have to ignore the 0s which were flipped to 1 after the last 1 in the input bits.
// ie. for 5 - 0000....01010, after the last 1 from RHS all next bits are 0 and should not be considered while converting to decimal.
// FOR THIS WE WILL USE THE MASK NUMBER.


#include<iostream>
using namespace std;
int main(){

cout<<"Enter an integer : "<<endl;
int n;
cin>>n;
int mask = 0;

int m=n; //create a temp. variable m, which will be used for generating mask.



// Generating the mask number
while (m!=0)
{
  mask = (mask << 1) | 1; // Use bitwise OR operation and not Logical OR.
  m = m >> 1;
}

int ans = ~n & mask;

if (n==0)
{
  cout<<"The converted DECIMAL Number is 1 "<<endl;
}
else{
cout<<"The converted DECIMAL Number is : "<<ans<<endl;
}

return 0;
}
// we have missed an edge case here - what if the input n is 0, we have always calculated for n!=0. 
// Code has been updated for input n = 0;