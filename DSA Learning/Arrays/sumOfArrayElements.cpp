// WAP to calculate the sum of all elements of an array.


#include<iostream>
using namespace std;
int main(){

    int array[100];
    int size;

    //taking to array elements as input;
    cout<<"enter the array's size : "<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }

    int sum = 0;
    //calculating sum;

    for (int i = 0; i < size; i++){

        sum = sum + array[i];
    }

    cout<<" the sum is : " << sum << endl; 
return 0;
}