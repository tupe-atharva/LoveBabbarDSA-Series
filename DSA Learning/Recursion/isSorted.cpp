#include<iostream>
using namespace std;

bool isSorted (int arr[] , int size){
    // Base Case : if 0 or 1 element is present, then array is sorted.
    if(size == 0 || size == 1){
        return true;
    }

    // Processing :
    if (arr[0] > arr[1]){
        return false;
    }

    // Recursive Relation : We made the first comparison between 0th and 1st elem and checked, now recursively call the function for the rest of the array.
    // In this way we did 1 part of the comparison and the recursion does the rest.
    else{
        bool ans = isSorted (arr + 1 , size - 1);
        return ans;
    }
}




int main(){ 
    int arr[5] = {4,2,3,4,5};
    cout << isSorted(arr , 5) << endl;
 
 
    return 0;
}