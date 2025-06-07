#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class animal{

    public:
        void speak(){
            cout << "Speaking ! " << endl;
        }

};

class dog : public animal{

};

class cat : public animal{

};

class germanShepherd : public dog{

};
// This is an example of hybrid inheritance 
// Where germanShepherd class inherits dog class and dog class inherits animal class --> Multi-level inheritance.
// Whereas at the same time, dog and cat class inherits animal class which exhibits hierarchical inheritance.


int main(){ 
 
    germanShepherd g;
    cout << endl;
    g.speak();
    cout << endl;
 
    return 0;
}