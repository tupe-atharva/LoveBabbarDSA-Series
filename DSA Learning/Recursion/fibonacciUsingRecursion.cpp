// #include<iostream>
// using namespace std;

// int fibonacci (int n ){
//   int series[n];
//   series[0] = 0;
//   series[1] = 1;
//   int i = 2;
//   // Base case - n == 8
//   if (n == 8)
//   {
//       return 0;
//   }

//   // Processing
//   series[i] = series[i-1] + series[i-2];
    

//   // Recursive relation : f(n) = f(n-1) + f(n-2)
//   return fibonacci (i+1);
    
// 
// int main(){ 
    
//     int n = 8;
//     cout << "The fibonacci series upto 8th element is : " << fibonacci(n) << endl;

//     return 0;
// }



#include<iostream>
using namespace std;

int fib(int n) {
    //vector<int> series[n];
    int* series = new int[n];
    series[0] = 0;
    series[1] = 1;
    int ans;

    for (int i = 2 ; i <= n ; i++){
        series[i] = series[i-1] + series[i-2];
        ans = series[i];
    }
    return ans;
}

int main(){ 
 
    cout << "The 4th element is : " << fib(4) << endl;
 
    return 0;
}