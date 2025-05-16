#include<iostream>
using namespace std;

int getSum(int *arr , int size){
    int sum = 0;

    // Base Case :
    if (size == 0 )
        return sum = 0;
    if (size == 1)
        return sum = arr[0];
    
    // Recursive Relation :
    int remainingPart = getSum(arr + 1 , size - 1);
    sum = arr[0] + remainingPart;
    return sum;
}




int main(){ 
    
    int arr[5] = {3,2,5,2,6};
    int size = 5;
    cout << "The Sum of array's elements is " << getSum(arr , size) << endl;

    return 0;
}