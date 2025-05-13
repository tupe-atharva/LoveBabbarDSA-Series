#include<iostream>
using namespace std;
 
int main(){ 
    
    // Making a square matrix
    // int n ;
    // cout << "Enter the value of n : ";
    // cin >> n;
    // cout << endl;

    // int **arr = new int*[n];
    // // This will create an array of pointers dynamically.

    // // Creating 2D array - the following code will reserve memory for the 2D array in the heap.
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = new int[n];
    // }
    
    // // Taking Input.
    // cout << "Enter the 2D Array's elements : " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //    for (int j = 0; j < n; j++)
    //    {
    //     cin >> arr[i][j];
    //    }
       
    // }
    // cout << endl;

    // // Printing Output.
    // cout << "The 2D array is : " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //    for (int j = 0; j < n; j++)
    //    {
    //     cout << arr[i][j] << " ";
    //    }
    //    cout << endl;
       
    // }
    // cout << endl;
    // --------------------------------------------------------------

    // When number of rows and columns are diff.

    int row, col ;
    cout << "Enter the number of rows : ";
    cin >> row;
    cout << "Enter the number of columns : ";
    cin >> col;
    cout << endl;

    int **arr = new int*[row];
    // This will create an array of pointers dynamically.

    // Creating 2D array - the following code will reserve memory for the 2D array in the heap.
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    
    // Taking Input.
    cout << "Enter the 2D Array's elements : " << endl;
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
        cin >> arr[i][j];
       }
       
    }
    cout << endl;

    // Printing Output.
    cout << "The 2D array is : " << endl;
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
        cout << arr[i][j] << " ";
       }
       cout << endl;
       
    }
    cout << endl;


    // Releasing Memory.

    for (int i = 0; i < row; i++)
    {
        delete [] arr[i]; // Deleting column arrays.
    }

    delete []arr; // Deletes the pointer's row which were poiting to column arrays.
    
 
    return 0;
}