#include<iostream>
using namespace std;

int gcd (int a , int b){

    if (a == 0){
        return b;
    }
    if (b == 0){
        return a;
    }

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }

        else
        {
            b = b - a;
        }
        
    }
    
    return a;
} 


int main(){
 
int a = 12, b = 72;
int ans = gcd(a,b);
cout << "The GCD of a and b is " << ans << endl;
 
 
return 0;
}