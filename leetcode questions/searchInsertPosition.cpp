#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) 
{
    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start)/2;

    while (start <= end)
    {
        if (nums[mid] == target){
            return mid;
        }
        else if (nums[mid] > target){
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return start;
}



int main(){

    vector<int> nums = {1,3,5,6};
    cout << "Index is : " << searchInsert(nums, 2) << endl;
 
 
 
return 0;
}