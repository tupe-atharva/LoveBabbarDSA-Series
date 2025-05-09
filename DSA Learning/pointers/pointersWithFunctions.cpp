#include<iostream>
using namespace std;

void print (int *p){
    cout << *p << endl;
    cout << *p + 1 << endl;
    cout << p << endl;
    cout << p + 1 << endl;
    cout << *(p + 1) << endl;
}

void update (int *p){
    cout << "Value of p Before : " << p << endl;
    p = p + 1;
    cout << "Value of p after : " << p << endl;
}

int getSum (int *arr , int n){
    cout << "Size is : " << sizeof(arr) << endl;
    // this size will not print 20 (5 elements of 4 bytes so 20 total), but it will print 8 as when we pass an array as the parameter to a function, it actually passes the pointer pointing to the starting memory location of the array.
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
    
}


int main(){
 
// int num = 5;
// int *ptr = &num;
// //print(ptr); 
// cout << "Value of ptr before :"<< ptr << endl;
// update (ptr);
// cout << "Value of ptr after : " << ptr << endl;
 // Question - why is it printing the old value of p ?
 // Ans : As we paas ptr to the update function, it created a copy of ptr and made changes to it, Orignally ptr was not updated at all.
 

 int arr[5] = {1,2,3,4,5};
 cout << "The sum is : " << getSum(arr , 5) << endl;
return 0;
}