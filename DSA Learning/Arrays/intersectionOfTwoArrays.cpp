// You are given two arrays 'A' and 'B' of size 'N" and "M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.
// Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

// Note :
// 1. The length of each array is greater than zero.
// 2. Both the arrays are sorted in non-decreasing order.
// 3. The output should be in the order of elements that occur in the original arrays.
// 4. If there is no intersection present then return a single integer ' -1 '



// ----------- APPROACH ----------- //

// run a nested loop and check all elements of 1st array with all elements of second array. Since both the arrays are in a non - decreasing order ie. in an increasing order, once the element of the second array becomes bigger than the checking element of the first array, use a break statement to exit the loop.




#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> ans;

// Let's initialize 2 arrays for instance 
int arr1[] = {23 , 12 , 24 , 67 , 45};
int arr2[] = {12 , 1 , 3 , 24 , 45};


for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5 ; j++)
    {
       if (arr1[i] == arr2[j])
       {
        ans.push_back(arr1[i]);
        //cout << "Intersecting Element : " << arr1[i] << endl;
       }
       
    }
    
}

cout << "Intersecting Element : " ;
for (int i = 0; i < ans.size(); i++)
{
   cout << ans[i] << " " ;
}cout<<endl;

// This approach has very high time complexity due to nesting.
// Optimized solution - (using the fact that both arrays are sorted in ascending order)
// run a while loop till i<n && j<m
// if both elements ie. arr1[i] == arr2[j], add this element to the vector using push_back,
// else case - arr1[i] < arr2[j], then move i pointer ahead by i++
// else case : increment j pointer


 
return 0;
}