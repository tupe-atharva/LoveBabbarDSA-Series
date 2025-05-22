#include<iostream>
using namespace std;

void bubbleSort (int *arr , int length){
    int i = 0;
    // Base Case : 
    if(i == length - 1)
        //return *arr;


    // Processing : 
    if (arr[i] > arr[i+1])
        swap(arr[i] , arr[i+1]);

    // Recursive Call : 


}



int main(){ 
 
    int arr[5] = { 23, 45, 22, 54, 12};
    int length = 5;
    bubbleSort (arr , length);
 
    return 0;
}