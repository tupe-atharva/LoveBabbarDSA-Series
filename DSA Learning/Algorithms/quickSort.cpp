#include<iostream>
using namespace std;

// This function partitions the array around the pivot element, where all elements on the right are smaller than the pivot and all elements on the right are greater than the pivot.
int partition(int arr[] , int start , int end){

    int pivot = arr[start];
    int count = 0;
    for (int i = start + 1 ; i <= end ; i++){
        if(arr[i] <= pivot)
            count++;
    }

    int pivotIndex = start + count;
    // We use start + count and not just count as in every iteration the array gets sub-divided and the value of start keeps changing.
    
    swap (arr[start] , arr[pivotIndex]); // Swap the chosen pivot element to its right place

    // Swap elements in a way that all elements smaller than pivot element are on its right and all elements greater than the pivot element are on the right of the pivot element.
    int i = start , j = end;
    while (i < pivotIndex && j > pivotIndex){
        
        // If elements on the left are already smaller than pivot just move i pointer forward.
        while(arr[i] <= pivot)
            i++;

        // If elements on the right are already greater than pivot just move j pointer backward.
        while(arr[j] >= pivot)
            j--;

        // If even after above 2 while loops, i and j have not reached the pivotIndex that means there are element that need to be swapped (and move pointers ahead ofc).
        if (i < pivotIndex && j > pivotIndex){
            swap(arr[i++] , arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[] , int start , int end){
    //cout << "hello" ;
    // Base Case : when start and end cross
    if(start >= end)
        return ;
    
    // Creating pivot element's index.
    int pivotIndex = partition(arr , start , end);

    // Recursive call to sort left part of the array.
    quickSort(arr , start , pivotIndex - 1 );
    // here lenght of subarray is (pivotIndex - start) + 1

    // Recursive call to sort right part of the array.
    quickSort(arr , pivotIndex + 1 , end);
    // here lenght of subarray is end - pivotIndex
}

int main(){ 
    //cout << "hello" ;
    int arr[] = {3,1,4,5,2 ,6,0 ,9};
    int length = 8;
    quickSort(arr , 0 , length - 1 );
    
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " " ;
    }cout << endl;
    
    return 0;
}

