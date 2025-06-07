#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class A{

    public:
        void func(){
            cout << "Function from A ! " << endl;
        }

};

class B{

    public:
        void func(){
            cout << "Function from B ! " << endl;
        }

};

class C : public A, public B {

};

int main(){ 
    
    C obj;
    obj.A::func();
    obj.B::func();
    
    return 0;
}