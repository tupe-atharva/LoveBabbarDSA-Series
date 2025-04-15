//Write a function that calculates the sum of the rows and returns the largest sum.

#include<iostream>
using namespace std;

// int rowSum (int arr[3][3])
// {
//     for (int i = 0; i < 3; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < 3; j++)
//         {
//             sum+= arr[i][j];
//         } 
//         cout << sum << endl;
//     }
// }

int largestRowSum(int arr[3][3]){
    int largestSum = INT16_MIN;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum+= arr[i][j];
        } 
            if (sum > largestSum)
            {
                largestSum = sum;
            }
        
    }
    return largestSum;
}


int main()
{
    int arr[3][3];
    // Taking input of 2D Array.
    cout << "Enter the elements of the 2D Array " << endl;
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
        cin >> arr[i][j];
       }
       
    }

    cout << " The Largest Row sum is : " << largestRowSum(arr) << endl;
    return 0;
}