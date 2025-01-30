#include<iostream>
using namespace std;
int main(){

//We will try to find the amximun and minimum element of an array.
// int array[6] = {0,1,2,3,4,5};
// int max = 0; 
// int min = INT_MAX;

// for (int i = 1; i <6; i++)
// {
//    if (array[i-1] < array[i])
// this is the wrong condition because Your condition checks only adjacent elements.
// Let's say we have:
// i = 1, compares array[0] (3) and array[1] (5), updates max = 5.
// i = 2, compares array[1] (5) and array[2] (1), does not update max.
// i = 3, compares array[2] (1) and array[3] (4), updates max = 4 (which is wrong because 5 is greater).
// The correct logic should compare each element directly with max.
//    {
//     max = array [i];
//    }

//     if(array[i] < min){
//         min = array[i];
//     }
   
// }

// cout<<"The Max element in the array is  : "<<max<<endl;
// cout<<"The Min element in the array is  : "<<min<<endl;




// Approach 2 : set value of max and min to INT_MIN and INT_MAX respectively. And then compare the array elements with these values.

int max = INT_MIN;
int min = INT_MAX;
int size;
int array[100];
cout<<"enter the size of the array"<<endl;
cin>>size;
cout<<"Enter the elements of the array : "<<endl;
    //Taking input of array elements;
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }


for (int i = 0; i < size; i++){
    // Finding Max element;
    if (array[i] > max)
    {
        max = array[i];
    }
    // Finding Min element;
    if (array[i] < min)
    {
        min = array[i];
    }
    
}

cout<<"The Max element in the array is  : "<<max<<endl;
cout<<"The Min element in the array is  : "<<min<<endl;
return 0;
}