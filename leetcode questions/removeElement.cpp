// QUESTION : Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.


// ## Intution :-
// Let's traverse the array and check if element == val, if yes then delete it and shift all elements to the left.
// **Problem with this : when you delete and shift left, the loop is still running untill nums.size(), but the vector's size has been reduced, so now the loop will try to access out of bounds elements.**

// Then return the count of the updated vector - nums.
// Using a 2 pointer approach shift all the occurences of val to the end of the array, and count only untill nums[i] !=val.
// **You cannot use the condition nums[i] != val for counting the number of valid elements, as there can be a test case where val is not even present in the vector, in this case the loop will run infinitely leading to a runtime error.**

// ## Final Approach :-
// 1. Use 2 pointers - one from the start of the vector and one from the end of the vector.
// 2. Traverse the vector untill both the pointers meet.
// 3. if element == val, use the erase function to remove the element.
// 4. Use the pushback function to put the removed element at the end of the vector and decrement the end pointer.
// 5. if element != val, simply increment the start pointer to move to the next element.
// 6. Return the value of the end counter as it will give the number of valid elements.

// **NOTE : We start n from outside the vector, the last index is 7 so n = 8. In that way when n decrements it denotes the number of valid elements.**

// ## Iteration Table :-

// Test case : [0,1,2,2,3,0,4,2];
// val = 2;

// **Iteration 1** : i = 0 & n = 8
// nums[i] != val, so i++;

// **Iteration 2** : i = 1 & n = 8
// nums[i] != val, so i++;

// **Iteration 3** : i = 2 & n = 8
// nums[i] = val, so shift nums[2] to the end of the vector and n--;
// Updated vector - [0,1,2,3,0,4,2,2]

// **Iteration 4** : i = 2 & n = 7
// nums[i] = val,  so shift nums[2] to the end of the vector and n--;
// Updated vector - [0,1,3,0,4,2,2,2]

// **Iteration 5** : i = 2 & n = 6
// nums[i] != val, so i++;

// **Iteration 6** : i =  & n = 6
// nums[i] != val, so i++;

// **Iteration 7** : i = 4 & n = 6
// nums[i] != val, so i++;

// **Iteration 6** : i = 5 & n = 6
// nums[i] = val, so shift nums[5] to the end and decrement n ;
// Updated vector - [0,1,3,0,4,2,2,2]

// Finally : i = 5 and n = 5 so break out of the while loop.

// **n = 5 indicates the presence of 5 valid numbers.**


#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int i = 0;
    int n = nums.size(); // Start n from last index + 1;

        while (i < n) {
        if (nums[i] == val) {
            nums.erase(nums.begin() + i);
            nums.push_back(val);
            n--;  // Decrease valid size
        } else {
            i++;
        }
    }
    return n;  // All non-val elements are now in the first n positions
}


int main()
{
 
    vector<int> nums = {0,1,2,2,3,0,4};
    int val = 2;

    cout << endl << "The number of valid elements after removing alloccurences of " << val << " is " << removeElement(nums, val) << endl<< endl;
       
    return 0;
}