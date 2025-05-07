#include<iostream>
using namespace std;
 
int main(){
 
// int num = 5;
// int *ptr = &num;

// //ptr stores the address of the num variable.
// cout << "Address is : " << ptr << endl;

// //*ptr is a de-reference, ie. it will give the value of the variable ptr is pointing to.
// cout << "Value is : " << *ptr << endl;

// // Data type of the pointer and the variable it is poiting to should be SAME.
// double d = 4.2344;
// double *ptr2 = &d;
// cout << "Address is : " << ptr2 << endl;
// cout << "Value is : " << *ptr2 << endl;


// Copying a pointer
// int num = 5;
// int *p = &num;
// int *q = p;
// cout << "address saved in p is : " << p << endl;
// cout << "address saved in q is : " << q << endl;
// cout <<  *p << " - " << *q << endl;

//Pointer Arithmetic :

int num = 5;
int *p =&num;
// *p++; this increments the memory location of p and not the value it is pointing at.
// *(p)++ increments the value at which p is pointing.
(*p)++;
cout << "Value is : " << num << endl;
cout << "Initial address is : " << p << endl;
p++;
cout << "Updated address is : " << p << endl;

return 0;
}