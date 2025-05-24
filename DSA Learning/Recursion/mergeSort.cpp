#include<iostream>
using namespace std;

void merge (int *arr, int start , int end){

    int mid = start + (end - start)/2;
    int len1 = (mid - start) + 1;
    int len2 = end - mid;

    // Create 2 arrays dynamically using pointers.
    int *subArr1 = new int[len1];
    int *subArr2 = new int[len2];

    // copy the 2 parts into two arrays.

    int k = start; // k points to the elements of arr.

    // copying 1st part into subarr1.
    for (int i = 0; i < len1; i++)
    {
        subArr1[i] = arr[k++];
    }

    k = mid + 1; // for second part k should start from mid + 1 and go to the end.
    // copying 2nd part into subarr2.
    for (int i = 0; i < len2; i++)
    {
        subArr2[i] = arr[k++];
    }

    // Merge both the subparts :
    // run a while loop within the subarray indices and compare the elements. Use a pointer to point to the main arrays index and put the smaller element in that index and increment it.

    int index1 = 0 , index2 = 0;
    int mainArrayIndex = start;
    // main array's index should start from the start variable and not 0.

    while (index1 < len1 && index2 < len2)
    {
        if (subArr1[index1] < subArr2[index2]){
            arr[mainArrayIndex++] = subArr1[index1++];
        } // increment main index to point to the next position in the array.
        else{
            arr[mainArrayIndex++] = subArr2[index2++];
        }
        
    }
    // If after above while loop, there are elements present in any of the subarray they should be directly copied into the main array as they are already sorted.

    while(index1 < len1)
        arr[mainArrayIndex++] = subArr1[index1++];
    
    while(index2 < len2)
        arr[mainArrayIndex++] = subArr2[index2++];



}


void mergeSort ( int *arr , int start , int end){

    // Base Case : if start and end cross, then return
    if (start >= end)
        return ;

    // Processing : Break array into 2 parts and use recursive call to sort each part individually.
    int mid = start + (end - start)/2;

    // sort left part
    mergeSort(arr , start , mid);

    // sort right part
    mergeSort(arr , mid + 1 , end);

    // Merge the two sorted parts.
    merge(arr , start , end);

}

int main(){ 
 
    int arr[5] = { 23, 45, 22, 54, 12};
    int length = 5;
    cout << "The initial array was : ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;

    mergeSort (arr , 0 , length - 1);

    cout << endl << "The sorted array is : " ;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl << endl;
    
    return 0;
}