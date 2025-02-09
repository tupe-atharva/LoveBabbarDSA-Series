// We are given a sorted array and we are asked to find out the first and last occurence of a specific element.

// Since it is a sorted array - we will use Binary search to get O(nlogn) complexity.

#include<iostream>
using namespace std;

int firstOccurence (int arr[] , int key , int size)
{

    int start = 0 , end = size - 1;
    int mid = (start + end) / 2 ;
    int ans = 0;
    //int leftMost = 0 , rightMost=0;
    while (start <= end)
    {
        if (arr[mid] == key)
        { 
            ans = mid;
            end = mid -1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else{
            end = mid -1;
        }

        mid = (start + end) / 2 ;
        
    }
    return ans;

}

int lastOccurence (int arr[] , int key , int size){

    int start = 0 , end = size - 1;
    int mid = (start + end) / 2 ;
    int ans = 0;
   
    while (start <= end)
    {
        if (arr[mid] == key)
        { 
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else{
            end = mid -1;
        }

        mid = (start + end) / 2 ;
        
    }
    return ans;
}



int main(){
// Initializing a sorted array.
int arr[] = {1,2,3,4,5,5,5,5,5,5,5,6,7,8,9};
// Say we have to find the first and last occurence of the element 5 and return its index in a vector - {4,6} will be our ans vector.

// Approach - using binary search find the middle element, then 3 cases arise
// - if the middle element is equal to the element we are searching for 

int key = 5;
int size = sizeof(arr)/sizeof(int);
cout << " The First occurrence of the key " << key << " is " <<  firstOccurence (arr , key , size) << endl;
cout << " The Last occurrence of the key " << key << " is " <<  lastOccurence (arr , key , size) << endl;
return 0;

}