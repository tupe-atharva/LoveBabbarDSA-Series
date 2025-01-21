//Given an integer n, return true if it is a power of two. Otherwise, return false.
//An integer n is a power of two, if there exists an integer x such that n == 2x.

// Input: n = 1
// Output: true
// Explanation: 2^^0 = 1
// Example 2:

// Input: n = 16
// Output: true
// Explanation: 2^^4 = 16

#include<iostream>
#include<math.h>
using namespace std;
int main(){

cout<<"Enter an intger : "<<endl;
int n;
cin>>n;

bool isFactor = 0;
for (int i=0; i<=30; i++) // since the max limit of n is upto 2^^31 - 1, check only upto 2^^30.
{

    if (pow(2,i) == n)
    {
        isFactor = 1;
        break;
    }
    // else{
    //     cout<<"False"<<endl;
    // }
    
}
if (isFactor == 1)
{
    cout<<"TRUE"<<endl;
}
else{
    cout<<"FALSE"<<endl;
}


// 2^^i == n ?

return 0;
}