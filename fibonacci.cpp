#include<iostream>
using namespace std;
int main(){

//FIBONACCI SERIES
// 0,1,1,2,3,5,8,13,21... (sum of last 2 numbers gives next number)

//APPROACH : initialize 1st two numbers using 2 variables - a & b.
// print their sum as 3rd number.
// keep shifting a and b towards right by swapping.
// and print their sum in a loop

int a=0,b=1;
int n = 10; //initialize for first 10 numbers of the series

cout<<a<<" "<<b<<" ";

for (int i=1; i<=n; i++){
int nextNumber = a + b;
cout<<nextNumber<<" ";

//swap a with b, and b with nextNumber to move a and b pointers towards right.


//             |------------|
//             |            |
//  0          1            1           2          3
// (a)        (b)      (nextNumber)
//             ^
// |___________|


a=b;
b=nextNumber;
   
}
cout<<endl<<"This is the required fibonacci series for n = "<<n<<endl;
return 0;
}
