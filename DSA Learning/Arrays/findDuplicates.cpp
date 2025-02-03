// You are given an array 'ARR' of size 'N' containing each number between 1 and N - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

// ------------ APPROACH ------------ //
// BRUTE FORCE : sort the array using bubble sort and then check adjacent elements, if they are same report them.

#include<iostream>
using namespace std;
 
int main()
{
    int arr[] = { 1,2,1,3,7,2,3,4,5,6,6,7,8,9,9,10};
    
    int length = sizeof(arr)/4;

    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]); 
            }
        }
    } 
    int nums [50];
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == arr[i+1]){
            cout<<"The duplicate element is : " << arr[i] << endl;
            //nums[i] = arr[i] ;
        }
    }

        // for (int i = 0; i < 50; i++){
        //     cout<<nums[i] << " " ;
        // }
    
    
    return 0;
}