#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class A {
    public :
        void func1(){
            cout << "Inside Function 1" << endl;
        }
};

class B : public A{
    public :
        void func2() {
            cout << "Inside Function 2" << endl;
        }
};

class C : public A{
    public :
        void func3() {
            cout << "Inside Function 3" << endl;
        }
};

// class D : public B{
//     public :
//         void func4() {
//             cout << "Inside class D";
//         }
// };

// class E : public B{
//     public :
//         void func5() {
//             cout << "Inside class E";
//         }
// };



int main(){ 
    
    cout << endl;
    A object1;
    object1.func1();
    cout << endl;

    B object2;
    object2.func1();
    object2.func2();
    cout << endl;

    C object3;
    object3.func1();
    object3.func3();
    cout << endl;
 
    return 0;
}