// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

// Example 1:
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]

// Example 2:
// Input: nums = [0]
// Output: [0]


#include<iostream>
using namespace std;

void moveZeroes (int arr[] , int size) {
   int j = 0;
    for (int  i = 0; i < size; i++)
    {
    if (arr[i] !=0)
       {
        swap(arr[i] , arr[j]);
        j++;
       }
       
    }  
}
void printArray(int arr[] , int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
    
}

int main(){
 
int arr[12] = {1,0,2,0,4,5,0,8,9,0,3,0};
int size = sizeof(arr) / sizeof(int);
moveZeroes (arr , size);
printArray(arr , size);
 
 
return 0;
}