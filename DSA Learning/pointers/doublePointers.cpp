#include<iostream>
using namespace std;
 
int main(){
 

int num = 5;
int *ptr1 = &num;
int **ptr2 = &ptr1;

// Printing address of num variable in 3 ways :
cout << endl << &num << endl;
cout << ptr1 << endl;
cout << *ptr2 << endl << endl;

// Printing value of num in 3 ways : 
cout << num << endl;
cout << *ptr1 << endl;
cout << **ptr2 << endl << endl;

// Printing address of ptr1 in 2 ways :
cout << &ptr1 << endl;
cout << ptr2 << endl << endl;

 
return 0;
}