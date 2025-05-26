#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class hero{

    public:
        // Default Constructor : 
        hero(){ // This will override the orignal default constructor.
            cout << "Default Constructor Invoked ! " << endl; 
            // This statement will execute as soon as the object of class hero is created.
        }

        // Parameterised Constructor :
        hero(int health){
            this -> health = health;
            cout << "Health is : " << health  << " (from parameterized constructor) " << endl;
           
            // RHS denotes the health that is coming as parameter.
            // LHS denotes the health variable of the class.
        }

        int health = 80;
        int age = 22 ;
        char level = 'A';
};

int main(){ 

    cout << endl;
    // Static creation of obj.
    hero h1; // only calls the default constructor
    hero h2(85); // invokes the parameterized const as a parameter is passed.
    cout << endl;

    // Dynamic creation of obj.
    hero *h3 = new hero; // only calls the default constructor
    hero *h4 = new hero(67); // invokes the parameterized const as a parameter is passed.



 
    return 0;
}