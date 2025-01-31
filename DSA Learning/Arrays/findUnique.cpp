// Given an array of size 2m + 1, where 2m elements are same ie. in pair and one element is unique in the array, Find that unique element.
// Eg. {2,2,3,3,4,4,5} -- ANS : 5

// ------------- APPROACH ------------- //
// iterate thru the array and check if the number is repeating - but for that u will have to check all the numbers with all other numbers, ie, array [0] with all other elements then array [1] with all other elements. This is the brute force approach.

// Consider the fact that XOR operator returns 0 if both elements are same. Thus in the array same elements will become 0, then we will have a bunch of 0s and the unique element. XOR operation on 0 and the unique element will return the unique element itself.

int unique (int array[] , int size){
    // run a for loop to access all elements
    int unique_element = 0 ; // intialize to 0 to avoid garbage value.
    for (int i = 0; i < size; i++)
    {
        unique_element = unique_element ^ array[i] ;
    }
    return unique_element; 
}


#include<iostream>
using namespace std;
 
    int main(){
    int array[7] = {2 , 3 , 1938 , 6 , 3 , 6 , 2};
    int demo = unique (array, 7);
    cout << "The Unique element is : " << demo << endl;
    return 0;
}