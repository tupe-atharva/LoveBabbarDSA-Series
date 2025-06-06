#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class parent{
    public:
        int a = 1, b = 2;

};

class child : public parent{
    public:
        int c = 3; 
};


int main(){ 
 
    child c1;
    cout << c1.a << endl;
    cout << c1.b << endl;
    cout << c1.c << endl;


 
    return 0;
}