// For a given two-dimensional integer array/list ‘ARR’ of size (N x M), print the ‘ARR’ in a sine wave order, i.e., print the first column top to bottom, next column bottom to top, and so on.
// For eg:-
// The sine wave for the matrix:-
// 1 2
// 3 4
// will be [1, 3, 4, 2].


#include<iostream>
using namespace std;
 
int main(){
 
// Taking input
int row,col;
cout << "Enter the number of rows and columns ";
cin >> row >> col;
int arr[row][col];
cout << "Enter the Array's Elements : " << endl;
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        cin >> arr[row][col];
    }
    
}

// Print array column-wise
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        cout << arr[col][row] << " " ;
    }
    cout << endl;
    
}
 
return 0;
}