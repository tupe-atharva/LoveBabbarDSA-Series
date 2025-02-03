#include<iostream>
using namespace std;

int binarySearch (int arr[] , int size , int key){
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    // there can be a overflow condition when the value of index exceeds the max value of an integer, to avoid that reconstruct the equation to -- mid = start + (end - start)/2.
    while (start <= end)
    {
        if (arr[mid] == key){
            return mid;
        }

        if (key > arr[mid]) // That means the key is on the right part.
        {
            start = mid + 1;
        }
        else{// key is on the left part
            end = mid - 1;
        }    
        mid = (start + end) / 2;    
    }
    return -1; // ie. the key is not present in the array.

}

int main()
{
    int even[6] = {1,2,3,4,5,6};
    int odd[5] = {7,8,9,10,11};
    cout << "hello" << endl;
    int a = binarySearch (even , 6 , 4);
    int b = binarySearch (odd , 5 , 11);
    cout << a << " " << b << endl;
 
    return 0;
}