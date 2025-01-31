// How does bubble sort work.
// in buble sort, the largest elememt is pushed to the end of the array - so in every iteration 1 largest element moves to the end.
// Number of iterations depends on the length of the array.
// for an array of 5 elements, the bubble sort will work 4 times, in every iteration it would move the largest element to the end.
// eg. arr[5] = { 23, 45, 22, 54, 12} 
// Iteration 1 : {.. , .. , .. , .. , 54}
// Iteration 2 : {.. , .. , .. , 45 , 54}
// Iteration 3 : {.. , .. , 23 , 45 , 54}
// Iteration 4 : {.. , 22 , 23 , 45 , 54}

// this sorts the array in ascending manner giving us 
// {12 , 22 , 23 , 45 , 54}


#include<iostream>
using namespace std;
 
int main(){
 
    int arr[5] = { 23, 45, 22, 54, 12};
    int length = 5;

    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]); 
            }
        }
    } 
    // outside loop runs 4 times, pushing largest element towards right in ach iteration.
    // inside loop runs for 4 - 3 - 2 - 1 times.
    cout<<"The sorted array in Ascending order is : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

return 0;
}