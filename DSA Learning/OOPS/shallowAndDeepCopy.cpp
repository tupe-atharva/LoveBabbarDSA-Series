#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class hero{

    public:
        int age;
        int health;
        char level;

    void setAge(int a){
        age = a;
    }

    int getAge(){
        return age;
    }

};

int main(){ 
 
    hero h1;
    h1.setAge(20);
    //cout << "Age is : " << h1.getAge() << endl;

    // Using the default copy constructor to set h2.
    hero h2(h1);
    // hero h2 = h1; // Works similar to above statement.
    //cout << "Age is : " << h2.getAge() << endl;

    // Changing h1's age and checking to see if h2's age is also changed.
    h1.setAge(69);
    cout << h2.age << endl;

 
    return 0;
}