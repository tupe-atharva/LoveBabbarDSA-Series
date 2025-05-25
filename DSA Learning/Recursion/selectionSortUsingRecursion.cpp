// Basically in selection sort, in every iteration we take the smallest element and place it in the right index

#include<iostream>
using namespace std;

void selectionSort (int *arr , int length){

    // Base Case : if only 1or 0  elements present, it means that array is already sorted.
    if (length == 0 || length == 1)
        return ;
     
    // Processing : put one element in its place and let recursion handle the rest.
    // Take the smallest element and put at 0th index.
    int smallest = INT16_MAX;
    for (int i = 0; i < length; i++)
    {
        if(arr[i] < smallest)
            smallest = arr[i];
        
        arr[i] = smallest;
    }
    
    

    // Recursive Call :
    return (selectionSort (arr , length - 1));

}

int main(){ 
    int arr[5] = { 23, 45, 22, 54, 12};
    int length = 5;
    selectionSort (arr , length);
    
    for (int i = 0; i < length; i++)
    {
       cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}