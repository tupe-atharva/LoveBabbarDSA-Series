#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class hero{

    private:
        char gender;

    public:
        int health = 80;
        int age = 22 ;
        char level = 'A';

    char getGender(){
        return gender;
    }

    void setGender(char g){
        gender = g;
    }

};


int main(){ 
 
    hero staticObject; // Statically creating object.

    //cout << "Size of the class is : " << sizeof(hero) << endl;
    // Here we get 12, but the class has 2 int, 2 chars so we should have got (4+4+1+1 = 10 in size) - Why did we get 12 ?
    // We got 12 because of the padding added by the compiler.

    cout << endl;
    cout << "Accessing using static object : " << endl;
    cout << "Health is : " << staticObject.health << endl;
    cout << "Age is : " << staticObject.age << endl;
    cout << "Level is : " << staticObject.level << endl;

    //cout << "Gender is : " << ramesh.getGender() << endl;
    staticObject.setGender('M');
    cout << "Gender is : " << staticObject.getGender() << endl;
    cout << endl;

    // Dynamic creation of object :
    hero *dynamicObject = new hero;
    cout << "Accessing using dynamic object : " << endl;
    cout << "Health is : " << (*dynamicObject).health << endl;
    cout << "Age is : " << (*dynamicObject).age << endl;
    cout << "Level is : " << (*dynamicObject).level << endl;
    dynamicObject->setGender('F');
    cout << "Gender is : " << dynamicObject->getGender() << endl << endl;
    
    return 0;
}