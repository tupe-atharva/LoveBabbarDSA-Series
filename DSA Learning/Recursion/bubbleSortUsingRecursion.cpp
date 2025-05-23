#include<iostream>
using namespace std;


// void print (int *arr , int length){
//    for (int i = 0; i < length; i++)
//     {
//        cout << arr[i] << " ";
//     }
//     cout << endl;
// }


void bubbleSort (int *arr , int length){
    
    
    // Base Case : 
    if(length == 0 || length == 1) // ie. if only 1 or 0 elements present then array is already sorted.
        return ;


    // Processing : 
    for (int i = 0; i < length - 1; i++)
    {
       if (arr[i] > arr[i+1])
            swap(arr[i] , arr[i+1]);
        // This loop will send the greatest element of the 1st iteration in the last index
        // Recursive call will work on the next elements in line.
    }
    
    // Recursive Call : 
    return (bubbleSort(arr , length - 1));

}



int main(){ 
 
    int arr[5] = { 23, 45, 22, 54, 12};
    int length = 5;
    bubbleSort (arr , length);
    
    for (int i = 0; i < length; i++)
    {
       cout << arr[i] << " ";
    }
    cout << endl;
    
 
    return 0;
}