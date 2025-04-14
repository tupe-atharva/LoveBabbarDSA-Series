
#include<iostream>
using namespace std;
 

void rowSum (int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum+= arr[i][j];
        } 
        cout << sum << endl;
    }
}

void colSum (int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum+= arr[j][i];
        } 
        cout << sum << endl;
    }
}


int main()
{
    int arr[3][3];

    // Taking input of array elements.
    cout << "Enter the elements of the 2D Array " << endl;
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
        cin >> arr[i][j];
       }
       
    }

    // Printing the inputted array.
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
        cout << arr[i][j] << " ";
       }
       cout << endl;
    }
    cout << "Printing the Row-wise Sum : " << endl;
    rowSum(arr);
    cout << "Printing the Column-wise Sum : " << endl;
    colSum(arr);
 
    return 0;
}