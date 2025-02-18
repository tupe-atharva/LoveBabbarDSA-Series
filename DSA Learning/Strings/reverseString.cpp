// Same logic as reversing an integer array.
// Use two pointers start and end and swap them.

#include<iostream>
using namespace std;

int getLength (char name[]) // Function to calculate lenght of char arr
{

    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
       count ++;
    }
    return count;
}


void reverse (char name[] , int length){
    int start = 0, end = length - 1;
    while (start <= end )
    {
        swap(name[start++] , name[end--]);
    }
    
}

int main(){

    char name[10];
    cout << "Enter your name : " << endl;
    cin >> name;
    //cout << "Your name is : " << name << endl;
    //cout << "The length of your string is : " << getLength(name) << endl;
    int length = getLength(name);
    reverse(name , length);
    cout << "The reversed string is : " << name << endl;

    return 0;
}