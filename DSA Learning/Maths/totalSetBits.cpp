// given 2 numbers a and b, return the total number of set bits in a&b.

// int setBits (int a , int b){
// // say a = 5(101), b = 8 (1000).
//     int answer, binary_a, binary_b;
//     while (a,b != 0)
//     {
//         int bits_a = a&1; // extracting the last bits of a.
//         int bits_b = b&1; // extracting the last bits of b.
//         binary_a = ; //forming the binary representation of a.
//         binary_b = ; //forming the binary representation of a.
    
//         a = a>>1; // right shifting a to get next bit in sequence.
//         b = b>>1; // right shifting b to get next bit in sequence.
//     }
//      answer =  binary_a & binary_b; // calculating a&b

//      // run a loop to check the last bit of a&b and updating the count if the bit is 1, and recursively right shifting
// }

//WRONG APPROACH !!!!!
// NO NEED TO PERFORM a&1, simple perform the bitwise AND operation on the input number, which will return the binary of the answer and count the set bits using a loop.




#include<iostream>
using namespace std;

int setBits(int a , int b){
    int count = 0; // intialize the count to 0 or else compiler will use garbage value.
    int and_op = a&b;
    while (and_op !=0) // loop runs untill all the bits are checked
    {
        int bits =  and_op & 1;
        if (bits==1)
        {
            count ++; 
        }
        and_op = and_op>>1;
        
    }
    return count;
}
int main(){
    
int a,b;
cout<<"Enter the value of a : " <<endl;
cin>>a;
cout<<"Enter the value of b : " <<endl;
cin>>b;

int answer = setBits(a,b);
cout<<"The number of set bits (ie. 1's) in a&b is : "<<answer<<endl;


return 0;
}