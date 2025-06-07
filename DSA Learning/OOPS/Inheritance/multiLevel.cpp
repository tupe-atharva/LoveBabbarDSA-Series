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

class germanShepherd : public dog{

};
//This is an example of multilevel inheritance where germanShepherd class inherits dog class and dog class inherits animal class.


int main(){ 
 
    germanShepherd g;
    cout << endl;
    g.speak();
    cout << endl;
 
    return 0;
}