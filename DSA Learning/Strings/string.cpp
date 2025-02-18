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


int main(){
 
// String is ntg but a char array.
char name[10];
cout << "Enter your name : " << endl;
cin>>name;
cout << "Your name is : " << name << endl;
cout << "The length of your string is : " << getLength(name) << endl;
 
return 0;
}