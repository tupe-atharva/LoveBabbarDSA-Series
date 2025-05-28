#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class hero {
    public :
        static int timeToComplete;
};

int hero :: timeToComplete = 45;

int main(){ 
 
    cout << hero::timeToComplete << endl;
 
    return 0;
}