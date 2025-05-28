#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class hero {
    public :
        static int timeToComplete;  
        static int demo(){
            return timeToComplete;
        }
};

int hero :: timeToComplete = 45;

int main(){ 
    //cout << hero::demo(45) << endl;
    cout << hero::timeToComplete << endl;
 
    return 0;
}