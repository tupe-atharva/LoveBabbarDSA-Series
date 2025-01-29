#include<iostream>
using namespace std;
int main(){

//       int reverse = 0;
//         int x = 121;
//         while(x!=0){
//             int digit = x % 10;
//             reverse = (reverse * 10) + digit;
//             x = x/10;
//         }
//         cout<<reverse;
//          if (x == reverse) {
//             cout<<"true";}
//         // } else {
//         //     return false;
//         // }
    


//     class Solution {
// public:
//     int addDigits(int num) {
        int sum = 0;
        int new_sum = 0;
        int num = 19;
        // cin>>num;
        while (num!=0){
            int digit = num % 10;
            sum = sum + digit;
            num = num/10;
        }
        cout<<"Sum" <<sum<<endl;
        while(sum >=10){
            while (sum > 0)
            {
                    int new_digit = sum %10;
                    new_sum = new_sum + new_digit;
                    sum = sum /10;
            }
            
          
        }
        cout<<"new sum"<<new_sum;
        // writing next case where the outputed number is to be added again digit by digit.
        // while(sum!=0){
        //     int sum_digit = sum %10;
        //      new_sum = new_sum + sum_digit;
        //      sum = sum / 10;
        // }
// here instead approach should be like - if sum outputed is greater than 9, ie. it is a 2 digit number, pass the sum again in the digit calculating function, else just return the sum.
       
//         return new_sum;
//     }
// };
return 0;
}