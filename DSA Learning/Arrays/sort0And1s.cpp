// we r given an array with 0s and 1s, we have to sort the array with all 0s on one side and 1s on the other side.



// ------------ APPROACH 1 ------------ //
// USING THE SORT FUNCTION.

// #include<iostream>
// #include<algorithm>
// using namespace std;
 
// int main(){

//     int arr[8] = {0,1,1,0,0,0,1,0};
//     sort(arr, arr + 8);
//     //sort(arr + 7, arr);
//     // the sort function expects the first parameter passed to it as the beginning of a range and not the end.

//     for (int i = 0; i < 8; i++)
//     {
//         cout << arr[i] << " " ;
//     }
//     cout << endl;
    
    
//     return 0;
// }


// ----------- APPROACH 2 ----------- //
// Using a 2 pointer approach for better complexity.
// Use 2 pointers i and j, with i=0 and j=n-1.
// 3 conditions arise :
// if arr[i] == 0; -- don't make changes move to next index (ie. i++)
// if arr[j] == 1; -- don't make changes move to next index (ie. j--)
// if arr[i] = 1 && arr[j] = 0, swap them.


#include<iostream>

using namespace std;

void sort0sAnd1s (int arr[] , int size)
{
    int left = 0, right = size - 1;

    while (left < right) // dont put left <= right, as it performs an extra swap in that case.
    {
        if (arr[left] == 0)
        {
            left++;
        }

        if (arr[right] == 1)
        {
            right--;
        }

        if (arr[left] == 1 && arr[right] == 0)
        {
           swap(arr[left],arr[right]);
           left++;
           right--;
        }
        
        
    }
    

}


void printArray (int arr[] , int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
}


int main()
{
    cout << "hello" << endl;
    int arr[12] = {0,1,1,0,0,0,1,0,1,0,1,0};
    sort0sAnd1s(arr, 12);
    printArray (arr, 12);
    
    return 0;
}
