#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class human{

    protected:
        string caste = "human";

    private:
        string race = "human";

    public:
        int age;
        int height;
        int weight;

        int getAge(){
            return age;
        }
        int getHeight(){
            return height;
        }
        int getWeight(){
            return weight;
        }
        void setAge(int a){
            age = a;
        }
        void setHeight(int h){
            height = h;
        }
        void setWeight(int w){
            weight = w;
        }

};

class male : public human{
    string gender = "Male";
    //cout << "hello" << endl;
    // cout wont work as we need an object to print anything
};
// Since male class in inheriting public part of the human class, it can access all the members of the human class set in public.

int main(){ 

    male atharva;
    atharva.setAge(22);
    atharva.setHeight(179);
    atharva.setWeight(79);
    cout << endl;
    cout << "The Age is : " << atharva.age << endl;
    cout << "The Height is : " << atharva.height << endl;
    cout << "The Weight is : " << atharva.weight << endl;
    //cout << atharva.race << endl;
    cout << endl;
 
    // Accessing Private members of the parent class through the child class is not possible.
    //cout << atharva.race << endl;
    // this will return an error as race is a private member.

    return 0;
}