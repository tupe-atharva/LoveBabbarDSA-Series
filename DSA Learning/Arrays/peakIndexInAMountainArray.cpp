// Given a mountain array (ie. array elements first increase and then decrease), find the peak element.


// APPROACH - 1 : Linear Search - Traverse the array using a for loop and compare to get the maximum element.
// COMPLEXITY : O(N)


// #include<iostream>
// using namespace std;
 
// int peakElement (int arr[] , int size)
// {
//     int peak = INT_MIN;
//     int index;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] >= peak)
//         {
//             peak = arr[i];
//             index = i;
//         }  
//     }
//     return index;
// }

// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7,5,4,3,2,1};
//     int size = sizeof(arr)/sizeof(int);
//     cout << "The peak element's Index in the array is : " << peakElement (arr, size) << endl;
//     return 0;
// }



// APPROACH - 2 : Using Binary Search 
// We know that binary search works with monotonic functions, but in the mountain case, the elements first increase and then decrease.
// solved Using the nested if else 


#include<iostream>
using namespace std;
 
int peakElement (int arr[] , int size)
{
    int start = 0 ; 
    int end = size - 1;
    int mid = (start + end) / 2;
    int index = 0;
    
    while (start <= end)
    {
        if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] < arr[mid - 1] )
        {
           end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    
    return -1;
}

int main()
{
    // cout << " HELLO " << endl;
    //int arr[15] = {1,2,3,4,5,6,7,8,9,10,5,4,3,2,1};
    int arr[4] =  {0,1,0};
    //int size = sizeof(arr)/sizeof(int);
    cout << "The peak element's Index in the array is : " << peakElement (arr, 4) << endl;
    return 0;
}