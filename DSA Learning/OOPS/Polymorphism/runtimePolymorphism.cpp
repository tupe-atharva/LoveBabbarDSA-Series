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
    public :
        void speak(){
            cout << "Barking ! " << endl;
        }
};

int main(){ 
 
    dog d1;
    animal a1;
    //a1.speak();
    d1.speak();
 
    return 0;
}