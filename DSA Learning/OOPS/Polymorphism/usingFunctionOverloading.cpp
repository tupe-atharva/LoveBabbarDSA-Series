#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class A{

    public :
        void func(){
            cout << "Hello" << endl;
        }

        void func(string name){
            cout << "Hello " << name << endl;
        }

        void func(char initial){
            cout << "Hello " << initial << endl;
        }

};


int main(){ 
 
    A obj;
    obj.func();
    obj.func("Atharva");
    obj.func("A");
    // In this way we overload the function func to achieve polymorphism.
    
    return 0;
}