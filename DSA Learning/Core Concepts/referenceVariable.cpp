#include<iostream>
using namespace std;

void update1 (int n){ // Pass by value.
    n++;
} 

void update2 (int &n){ // Pass by reference.
    n++;
}


int main(){ 

    int n = 10;
    cout << "Before : " << n << endl;
    update1(n);
    cout << "After : " << n << endl;

    cout << "Before : " << n << endl;
    update2(n);
    cout << "After : " << n << endl;


 
 
    return 0;
}