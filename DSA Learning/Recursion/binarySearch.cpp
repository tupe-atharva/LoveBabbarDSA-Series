// #include<iostream>
// using namespace std;

// bool binarySearch (int *arr , int size , int key){

//     // Base Case : Run untill the array is empty.
//     if (size == 1) // Do not put 0 for checking condition as in the end 1 element is going to remain in the array, when 1 element is remainig that means we should start returning.
//         return false;

//     // Processing :
//     int start = 0;
//     int end = size - 1;
//     int mid = end + (start - end)/2;

//     if (arr[mid] == key)
//         return true;

//     // Recursive Relation : key present on the right side
//     else if(arr[mid] < key){
//         int ans = binarySearch (arr + mid , size - mid , key );
//         // new arr index will be arr + mid;
//         // new size will be size - mid;
//         return ans;
//     }
//     // Recursive Relation : key present on the left side
//     else{
//         int ans = binarySearch (arr , size - mid , key );
//         // Here new arr index will still be arr as we are looking in the left part of the array.
//         // And the size becomes arr - mid.
//         return ans;
//     }
// }



// int main(){ 
 
//     int arr[] = {1,2,3,4,5,6,7,8};
//     int size = 8;
//     int key = 2;
//     int ans = binarySearch (arr , size , key);
//     cout << endl;
//     if(ans)
//         cout << "Present !" << endl;
//     else    
//         cout << "Absent " << endl;
//     cout << endl;
//     return 0;
// }


// Approach 2 : Sending start and end as parameters to the function.

#include<iostream>
using namespace std;
 

bool binarySearch (int *arr , int start , int end , int key){

    // Base Case : 
    if(start > end) // ie. when start and end pointers cross (exactly like how we did in the while loop).
        return false;
    
    int mid = start + (end - start) / 2;

    if (arr[mid] == key) // ie. Element is found.
        return true;

    // Recursive Relation :
    if(arr[mid] > key) // move towards the left.
        return binarySearch(arr , start , mid - 1, key);

    else // move towards the right.
        return binarySearch(arr , mid + 1 ,  end , key);

}


int main(){ 
    
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = 8;
    int key = 1;
    int start = 0;
    int end = size - 1;
    int ans = binarySearch (arr , start, end, key);
    cout << endl;
    if(ans)
        cout << "Present !" << endl;
    else    
        cout << "Absent " << endl;
    cout << endl;
 
    return 0;
}