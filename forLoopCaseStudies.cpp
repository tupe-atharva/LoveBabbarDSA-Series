#include<iostream>
using namespace std;
int main(){

// for(int i = 1; i<5; i--){
//   cout<<i<<endl;
//   i++;
// }
// Because of this contradictory behavior, every iteration of the loop decreases i by 1 first and then immediately increases it by 1, canceling out the decrement. As a result, i does not change, and the loop runs forever (infinite loop). The cout prints the same value repeatedly (1 in this case).
// i-- decreases, but i++ inside the loop undoes it, so i remains stuck at the initial value (1). Hence, the loop condition i < 5 is always true.

// for (int i = 0; i <=15; i+=2)
// {
//    cout<<i<<" ";

//    if (i&1)
// // The condition if (i & 1) is a bitwise operation that checks if a number i is odd.
// // i & 1 checks the last bit of i.
// // If the last bit of i is 1, it means i is odd, so the condition is true.
// // If the last bit of i is 0, it means i is even, so the condition is false.

//    {
//     cout<<"HI"<<" ";//checker to see if we r entering the IF block or not.
//     continue;
//     cout<<"HELLO"; // no statements present after continue will work.
//    }

//    i++;
   
// }


// for (int i = 0; i < 5; i++)
// {
//    for (int j = i; j < 5; j++)
//    {
//       cout<<i<<" "<<j<<endl;
//    }
   
// }

//no explaination needed, dry run and check.


// for (int i = 0; i <=5; i++)
// {
//    for (int j = i; j <=5; j++)
//    {

//       if (i+j==10)
//       {
//          cout<<"BREAKING";
//          break;
//       }
      
//       cout<<i<<" "<<j<<endl;
//    }
   
// }
//no explaination needed, dry run and check.


return 0;
}