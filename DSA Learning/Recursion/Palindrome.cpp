// WAP to check if an entered string is a palindrome or not using recursion.

// APPROACH :- Used a 2 Pointer Approach.

#include<iostream>
using namespace std;

bool checkPalindrome(string str , int start , int end){
    
    // Base Case :
    if (start >= end)
        return true;
    
    // Processing :
    if (str[start] == str[end]){
        //return true;
        start++;
        end--;
    }
    else{
        return false;
    }

    // Recursive Call : 
    return (checkPalindrome(str , start , end));


}

int main(){ 
 
    string str = "mom";
    cout << endl;
    if (checkPalindrome(str ,0 , str.length() - 1)) 
    {
        cout << "The entered string is a palindrome !" << endl;
    }
    else
    {
        cout << "The entered string is NOT a palindrome " << endl;
    }
    cout << endl;
 
    return 0;
}