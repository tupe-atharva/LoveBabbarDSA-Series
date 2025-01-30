// nCr = n! / (r!) * (n-r)!
// Using Functions, given the value of n and r as input, return the value of nCr.

#include<iostream>
#include<math.h>
using namespace std;


int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int combination(int num1, int num2){

    int ans = factorial(num1) /
     (factorial(num2) * factorial(num1-num2));

    return ans;
}

int main(){

    int n,r;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    cout<<"Enter the value of r : "<<endl;
    cin>>r;


    int nCr = combination(n,r);
    cout<<"The value of nCr, where n = "<<n<<" and r = "<<r<<" is : "<<nCr<<endl;

return 0;
}