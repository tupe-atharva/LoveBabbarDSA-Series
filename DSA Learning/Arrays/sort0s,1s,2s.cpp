// Given an array consisting of 0s, 1s and 2s only -- our task is to sort the array with all 0s then all 1s then all 2s.
// eg. {1,2,2,1,1,0,0,2,1} --> {0,0,1,1,1,1,2,2,2}

// --------- APPROACH 1 --------- //
// BRUTE FORCE : We can the built in sort function.


#include<iostream>
#include<algorithm>

using namespace std;

void sortArray (int arr[], int size)
{
    sort(arr, arr + (size));
}

void printArray (int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " " ;
  }
    cout << endl;
}

int main()
{
    int arr[] = {1,2,2,1,1,0,0,2,1};
    int size = sizeof(arr)/sizeof(int);
    sortArray(arr , size);
    printArray(arr , size);
    return 0;
}


// --------- APPROACH 2 --------- //
// Use a 3 pointer approach