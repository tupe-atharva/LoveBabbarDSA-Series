#include<iostream>
#include<vector>
using namespace std;
 

        
//         vector<vector<int>> matrix = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12},

//     };
//         vector<int> ans;
//         int num_row = matrix.size();
//         int num_col = matrix[0].size();

//         int startingRow = 0;
//         int startingColumn = num_col - 1;


//         // Printing 0th Row.
//         for (int col = 0; col < num_col; col++) // column number is iterating.
//         {
//             int row = 0; // row number is fixed.
//             ans.push_back(matrix[row][col]);
//         }
//         startingRow++;

//         // Printing last Column.
//         for (int row = 0; row <= num_row - 1; row++) // row number is iterating.
//         {
//             int col = num_col - 1; // column number is fixed.
//             ans.push_back(matrix[row][col]);
//         }
//         startingColumn--;

//         // Printing last Row. (ulta)
//         for (int col = num_col - 1; col >= 0; col--) // column number is iterating.
//         {
//             int row = num_row - 1; // row number is fixed.
//             ans.push_back(matrix[row][col]);
//         }

//         // Printing first Column. (ulta)
//         for (int row = num_row - 1; row >=0 ; row--) // row number is iterating.
//         {
//             int col = 0; // column number is fixed.
//             ans.push_back(matrix[row][col]);
//         }

//         cout << startingColumn << endl << startingRow << endl;

//         for (int i = 0; i < num_row * num_col; i++)
//         {
            
//         cout << ans[i] << " ";
            
        
            
//         }
    
    
//         // for (int i = startingColumn; i <= num_col - 1; i++)
//         // {
//         //     ans.push_back(matrix[startingRow][startingColumn]);
//         // }
        


 

       


class Solution 
{
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        // vector<int> ans;
        // int num_row = matrix.size();
        // int num_col = matrix[0].size();

        //     for (int col = 0; col < num_col; col++) // column number is iterating.
        //     {
        //         int row = 0; // row number is fixed.
        //         ans.push_back(matrix[row][col])
        //     }
        

        // //  for (int i=0 ; i<3; i++) // no need for the outer for loop at all
        // // {
            
        //     for (int row = 0; row < num_row - 1; row++) // row number is iterating.
        //     {
        //         int col = num_col - 1; // column number is fixed.
        //         ans.push_back(matrix[row][col])
        //     }
        // //}

        //upon traversing thru the first row - row number should become 2 and similarly columm        number should update as well - for this intialize the values to 0 and update accordingly.


// ------------------------------------------------------------------------------------------------
        vector<int> ans;

        // Calculating number of rows and columns present.
        int num_row = matrix.size();
        int num_col = matrix[0].size();

        // Intializations.
        int startingRow = 0;
        int startingColumn = 0;
        int endingRow = num_row - 1;
        int endingColumn = num_col - 1;

        int count = 0;
        int total = num_row * num_col;

        while (count < total)
        {
          
            // We are using the index variable for the iterating entity - for eg. in 0th row while going from left to right, column iterates from startingColumn (ie. 0th column) to endingColumn [ie. (num_col - 1)th column]
            
            // traversing 0th row
            for (int index = startingColumn; index<= endingColumn && count<total; index++)
            { // use the && count<total condition to make sure we do not take up extra elements (ie count should not exceed total).
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++; // move startingRow pointer to next row.

            // traversing last column
            for (int index = startingRow; index<= endingRow && count<total; index++)
            {
                ans.push_back(matrix[index][endingColumn]);
                count++;
            }
            endingColumn--; // move endingColumn pointer to previous column.

            // traversing ending row.
            for (int index = endingColumn; index>= startingColumn && count<total; index--)
            {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--; // move endingRow pointer to previous row.

            // traversing 0th column.
            for (int index = endingRow; index>= startingRow && count<total; index--)
            {
                ans.push_back(matrix[index][startingColumn]);
                count++;
            }
            startingColumn++; // move startingColumn pointer to next column.
        } 
        return ans;


        
    }
};

int main()
{
    vector<vector<int>> matrix = {{1,2,3} , {4,5,6}, {7,8,9}};

    // cout << spiralOrder(matrix) << endl;
    // we cannot directly print like this for 2 reasons
    // 1. the function spiralOrder returns a vector so use a for loop to print its elements.
    // 2. the function spiralOrder is a member of the solution class, so create an obj of the class and then use the . operator to access its member functions.

    Solution obj; // Create an object of Solution
    vector<int> result = obj.spiralOrder(matrix); // Call spiralOrder


    // printing the vector - result.
    for (int i = 0; i < result.size(); i++)
    // do not use i <=result.size() as it prints an extra garbage value. eg. output : 1 2 3 6 9 8 7 4 5 0 
    {
        cout << result[i] << " ";
    }
    cout << endl;
    


    return 0;
}