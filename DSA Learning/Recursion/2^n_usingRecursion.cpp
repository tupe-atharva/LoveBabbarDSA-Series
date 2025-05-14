#include<iostream>
#include<math.h>
using namespace std;

int powerOfTwo (int n){
    // Base Case -  When power of 2 is 0, return 1.
    if (n == 0)
    {
       return 1;
    }

    // Recursive Relation : 2^n = 2 * 2^(n-1);

    return 2 * powerOfTwo(n-1);    
}




int main(){ 
 
    cout << "Enter the value of n : ";
    int n;
    cin >> n;
    cout << "The value of 2^" << n << " is : " << powerOfTwo(n) << endl;

    return 0;
}