#include<iostream>
#include<math.h>
#include<vector>
using namespace std;


    vector<int> plusOne(vector<int>& digits) 
    {
        int size = digits.size();

        // If size is small, safely use number-based logic
        if (size <= 9) 
        {
            long long number = 0;
            int m = size - 1;

            // Extracting numbers from the given vector and creating a variable called number.
            for (int i = 0  ; i < size && m >= 0 ; i++, m--) 
            {
                number += digits[i] * pow(10, m);
            }


            // Adding 1 to the extracted number and storing in th eresult variable.
            long long result = number + 1; 

            // Convert result to string to get it's length.
            string str = to_string(result);
            int length = str.length();

            // Create a vector called ans to store the result.
            vector<int> ans;

            m = length - 1;

            // Run a for loop to add the results digits to the vector ans.
            for (int i = 0 ; i < length && m >= 0 ; i++, m--) 
            {
                int digit = result / pow(10, m);
                ans.push_back(digit);
                result -= digit * pow(10, m);
            }

            // Return the ans vector.
            return ans;
        }

        // For large inputs, handle manually to prevent overflow
        vector<int> ans = digits;
        int n = size;

        for (int i = n - 1; i >= 0; i--) 
        {
            // check the last element of ans vector - two cases arise.
            // if the last element is less than 9 then simply increment it.
            // else if the last element is 9, make it 0 
            if (ans[i] < 9) 
            {
                ans[i]++;
                return ans;
            }
            ans[i] = 0; // carry over
        }


        //Covering exceptional case where all the digits are 9.
        // All digits were 9 (e.g. 9999999...)
        ans.insert(ans.begin(), 1);
        return ans;
    }


int main()
{
    vector<int> demo = {9,9,9,9,9,9,9};
    vector<int> answer = plusOne(demo);

    for (int i = 0; i < answer.size() ; i++)
    {
        cout << answer[i] << " " ;
    }
    cout << endl;
 
    return 0;
}