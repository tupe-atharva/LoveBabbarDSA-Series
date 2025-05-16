#include<iostream>
#include<math.h>
#include<vector>
using namespace std;


void sayDigits(int n ){

    // Base Case
    if(n == 0)
        return ;
    
    // Processing 
    int digit = n % 10;
    n = n / 10;
    
    string arr[10] = {"zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine"};
    //cout << arr[digit] << " " ;
    // Do not print the digit here as it will print the number in reverse.
    // Print after recursive call.


    // Recursive Relation
    sayDigits(n);
    cout << arr[digit] << " " ;
}


int main(){ 
 
    cout << "Enter the number : " ;
    int n;
    cin >> n;
    sayDigits(n);
    cout << endl;
 
  return 0;
}