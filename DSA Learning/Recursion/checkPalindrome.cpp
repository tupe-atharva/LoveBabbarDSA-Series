// WAP to check if an entered string is a palindrome or not using recursion.

// Approach :- Reversed and compared with orignal string.


#include<iostream>
using namespace std;


void reverse(string &st, int s , int e){

    
    if(s >=e)
        return ;

    swap(st[s] , st[e]);
    s++;
    e--;

    reverse(st, s , e);
    
}



int main(){ 
 
    string str1 = "abba";
    string copy = str1;
    //cout << copy ;
    reverse(str1 , 0 , str1.length() - 1);
    cout << endl;
    if(str1 == copy){
        cout << "The entered string is a palindrome" << endl;
    }
    else{
        cout << "NOT a palindrome " << endl;
    }
    cout << endl;

    return 0;
}