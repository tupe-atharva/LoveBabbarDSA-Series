#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class dog {

    public:
        void bark(){
            cout << "Barking ! " << endl;
        }

};

class human {
    public:
    void speak(){
        cout << "Speaking !" << endl;
    }
};

// Multiple Inheritance : karens inherits both human and dog class.
class karens : public dog, public human{

};

int main(){ 
 
    karens k1;
    cout << endl;
    k1.bark();
    k1.speak();
    cout << endl;

    return 0;
}