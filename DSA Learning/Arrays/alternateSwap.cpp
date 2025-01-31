// {1,2,3,4,5,6} --> {2,1,4,3,6,5}
// ---------- Approach ---------- //
// intialize 2 pointers to start from 1st and second position of the array and swap them, after swapping both should increment by 2.
// Have to think about odd number of elements too.
// -- for odd number of elements, check if the pointer leaves the array size, if yes - dont swap anything.

#include<iostream>
#include<math.h>
using namespace std;

void alternateReverse(int array[] , int size){
int i = 0, j = 1;
    while (i < size)
    {
        if(j<size){
            swap (array[i] , array[j]);
        }
        // else{
        //     cout<<"out of bound " << endl;
        // }
        i+=2;
        j+=2;
    }
}
// this function is not optimized, as u have used 2 variables i and j, try solving this in 1 variable using a for loop.

int main(){
    int size;
    cout << "Enter the Array's Size : " << endl;
    cin >> size;
    int array[size];
    cout << "Enter the Array's elements : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }

    alternateReverse (array , size);
    cout << "The Array's elements after alternate swapping : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}

