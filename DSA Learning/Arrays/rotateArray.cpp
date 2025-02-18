#include<iostream>
using namespace std;

void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotateArray(int arr[] , int size , int rotations)
{

// APPROACH 1 :-
// store the last element, run a for loop from end of the array and shift all elements to the right, then put the stored last element at the 0th index.
// This approach is not efficient and not feasible for large sized array considering that we have to traverse the complete array in every iteration.


//     int i = 0;
//    while (i < rotations)
//    {
//     int last = arr[size - 1];
//     for (int j = size - 1; j > 0; --j)
//     {
//         arr[j] = arr[j-1];
//     }
//     arr[0] = last;
//     i++;
//    }  


// APPROACH 2 :- 
// Using the reversing approach here :
reverse(arr , 0 , size-1); // Rotate entire array.
reverse(arr , 0 , rotations-1); //Reverse upto the value of rotations from 0th index
reverse(arr , rotations, size-1); // Reverse the remaining part.
}


void printArray(int arr[] , int size){

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;

}

int main()
{

    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    //cout << size << endl;
    int rotations = 1;

    rotateArray(arr , size , rotations);
    printArray(arr , size);

    return 0;
}