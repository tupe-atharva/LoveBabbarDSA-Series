#include<iostream>
using namespace std;

void merge (int *arr1, int *arr2, int len1 , int len2){
    
    int *finalArray = new int[len1 + len2];

    int index1 = 0 , index2 = 0;
    int mainArrayIndex = 0;
    // main array's index should start from the start variable and not 0.

    while (index1 < len1 && index2 < len2)
    {
        if (arr1[index1] < arr2[index2]){
            finalArray[mainArrayIndex++] = arr1[index1++];
        } // increment main index to point to the next position in the array.
        else{
            finalArray[mainArrayIndex++] = arr2[index2++];
        }
        
    }
    // If after above while loop, there are elements present in any of the subarray they should be directly copied into the main array as they are already sorted.

    while(index1 < len1)
        finalArray[mainArrayIndex++] = arr1[index1++];
    
    while(index2 < len2)
        finalArray[mainArrayIndex++] = arr2[index2++];


    cout << endl;   
    cout << "The Merged Array is : ";
    for (int i = 0; i < len1 + len2; i++)
    {
        cout << finalArray[i] << " " ;
    }
    cout << endl;
    
}

int main(){ 
 
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {6,7,8,9,10};
    int len1 = 5;
    int len2 = 5;
    merge(arr1 ,arr2 , len1, len2);

    return 0;
}