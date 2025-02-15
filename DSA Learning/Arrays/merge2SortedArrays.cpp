#include <iostream>
using namespace std;

void merge(int arr1[], int m, int arr2[], int n, int arr3[]) {
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {  
        if (arr1[i] < arr2[j]) 
        {
            arr3[k++] = arr1[i++];
        } 
        else 
        {
            arr3[k++] = arr2[j++];
        }
    }

    // Copy remaining elements.
    while (i < m) 
    {
        arr3[k++] = arr1[i++];
    }

    while (j < n) 
    {
        arr3[k++] = arr2[j++];
    }
}

void print(int arr[], int size) {
    for (int j = 0; j < size; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[5] = {1, 3, 5 , 7, 9};
    int arr2[3] = {2, 4, 8};
    int arr3[6];

    merge(arr1, 5, arr2, 3, arr3);
    print(arr3, 8);

    return 0;
}
