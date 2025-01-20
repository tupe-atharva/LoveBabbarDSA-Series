#include<iostream>
using namespace std;
int main(){

for(int i = 1; i<5; i--){
  cout<<i<<endl;
  i++;
}
// Because of this contradictory behavior, every iteration of the loop decreases i by 1 first and then immediately increases it by 1, canceling out the decrement. As a result, i does not change, and the loop runs forever (infinite loop). The cout prints the same value repeatedly (1 in this case).
// i-- decreases, but i++ inside the loop undoes it, so i remains stuck at the initial value (1). Hence, the loop condition i < 5 is always true.

return 0;
}