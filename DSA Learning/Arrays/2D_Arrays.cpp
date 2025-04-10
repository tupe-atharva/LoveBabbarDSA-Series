#include<iostream>
using namespace std;
 
int main()
{
    // Creation
    int arr[2][3];

    // Initialization
    int arr2[3][3] = {1,2,3,4,5,6,7,8,9};
    // OR
    int arr3[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
 
    // Printing 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2[i][j] << " " ;
        }
        cout << endl;
        
    }
    
    // Similarly we can take inputs using nested loops.
 
    return 0;
}