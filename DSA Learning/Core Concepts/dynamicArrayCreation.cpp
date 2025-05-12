#include<iostream>
using namespace std;

int getSum(int *arr, int n ){

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    

    return sum;
}



int main(){ 
 
 
    cout << "Enter the array's size : ";
    int n;
    cin >> n;
    int *arr = new int[n];

    cout << "Enter the " << n << " elements : ";
    // Taking input for array.
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The sum of array elements is : " << getSum (arr, n) << endl << endl;
 
 
    return 0;
}