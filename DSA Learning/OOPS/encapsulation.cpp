#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class student{

    private:
        int age = 19;
        string name;

    public:
        int getAge(){
            return age;
        }
};
// This is an example of encapsualtion as all the data members and functions are wrappped in the class student.


int main(){ 
 
    student s1;
    cout << "The Age is : " << s1.getAge() << endl;

    return 0;
}