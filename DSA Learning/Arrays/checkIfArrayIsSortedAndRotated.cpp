// Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

// There may be duplicates in the original array.

// Note: An array A rotated by x positions results in an array B of the same length such that B[i] == A[(i+x) % A.length] for every valid index i.

 

// Example 1:

// Input: nums = [3,4,5,1,2]
// Output: true
// Explanation: [1,2,3,4,5] is the original sorted array.
// You can rotate the array by x = 3 positions to begin on the element of value 3: [3,4,5,1,2].
// Example 2:

// Input: nums = [2,1,3,4]
// Output: false
// Explanation: There is no sorted array once rotated that can make nums.
// Example 3:

// Input: nums = [1,2,3]
// Output: true
// Explanation: [1,2,3] is the original sorted array.
// You can rotate the array by x = 0 positions (i.e. no rotation) to make nums.

#include<vector>
#include<iostream>

using namespace std;
 
int main(){
 

std::vector<int> nums = {3,4,5,1,2};
class Solution {
public:
    bool check(vector<int>& nums) 
    {
        int count = 0 , n = nums.size();
        for (int i = 1 ; i<n ; i++)
        {
            if(nums[i-1] > nums[i])
            {
                count++;
            }
        }
        if(nums[n-1] > nums[0])
        { // increment the count if the last element is greater than the first element.
            count++;
        }

        return count<=1; // this checks if count = 1, if yes it returns true else false.
        // We missed an edge case when all array elements are equal, inthat case count will not increment at all. So we should return true even if count is 0 or 1, when count is greater than 1 then definetly return false.
    }
};
 
return 0;
}