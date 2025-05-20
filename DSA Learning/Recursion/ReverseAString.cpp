// WAP to reverse the entered string using recursion - "abc" --> "cba"


#include<iostream>
using namespace std;

void reverse(char *st, int s , int e){

    cout << "Call received for : " << st << endl;
    // Base case : when start and end pointers cross each other, stop.
    if(s >=e)
        return ;

    // Processing : Swap the 2 pointers and increment them.
    swap(st[s] , st[e]);
    s++;
    e--;

    // Recursive Relation : you made one swap, now just recursively call the function to do the rest of the swaps.
    reverse(st, s , e);
    
}


int main(){ 
    
    //string st = "abcd" ;
    // Will not work with strings - as you are passing the string by value, so a copy of st is made and is edited and orignal remains unchanged.
    // But when you pass a character array, its address is passed so changes are reflected in the main func as well.
    cout << endl;
    char st[5] = "abcd";
    reverse(st , 0 , 3);
    // Note : For a string the end pointer should start from size - 1, but for a character array, the end pointer must start from size - 2, because of the null character present at the end.
    cout << endl << "The reversed string is : " << st << endl;
    cout << endl;
 
    return 0;
}