#include<iostream>
using namespace std;
 
int main(){
 
int arr[5] = {1,7,3,4,5};

// Printing address of 1st memory block.
cout << "Address of 1st memory block is  : " << arr <<endl;
cout << "Address of 1st memory block is  : " << &arr <<endl;

// Accessing 1st memory block.
cout << "Value at 1st memory block is  : " << *arr <<endl;
cout << "Value at 1st memory block is  : " << arr[0] <<endl;

// PLaying with arithmetics.
cout << "Value at 1st memory block is  : " << *arr + 5979 <<endl;
cout << "Value at 1st memory block is  : " << *(arr + 1) <<endl; // goes to 2nd memory block of arr and prints it s value
cout << "Value at 1st memory block is  : " << *arr + 1 <<endl; // adds 1 to the 0th location's value.


// Char arrays.
char ch[6] = "abcde";
char *p = &ch[0];
cout << p << endl;
// NOTE : cout function will work differently in case of character arrays.
// Instead of printing the starting address like in integer arrays it will print the entire content of the character array.


 
return 0;
}