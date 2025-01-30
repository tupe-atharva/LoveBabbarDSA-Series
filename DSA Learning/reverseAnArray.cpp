// WAP to reverse an array

#include<iostream>
using namespace std;

// void reverse ( int array [], int size){
//     cout<<"The reversed array is : "; 
//     for (int i = 1; i <= size; i++)
//     {
//         cout << array[size - i] << " ";
//     }
//     cout<<endl<<endl<<endl;
// }
// This approach is wrong - as it does not reverse an array but ONLY AND ONLY prints the array in a reverse order.


// ------- RIGHT APPROACH --------- //

// To reverse an array - you need to use a 2 point approach and swap the elements. Use pointers at start and end elements and swap untill the start pointer crosses the end pointer. Start pointer moves right to left whereas end pointer moves opposite to start.

void reverse (int array[], int size){
    int start = 0;
    int end = size - 1;
    while (start<= end)
    {
        swap( array [start] , array [end]);
        start ++;
        end --;
    }  
}
// This method ensures that the orignal array has now been reversed.


int main(){
int size, array[100];
cout << "Enter the size of the array : " << endl;
cin >> size;
cout << "Enter the array's elements : " <<endl;

for (int i = 0; i < size; i++)
{
    cin>>array[i];
}

cout<<endl;
reverse(array , size);
cout<<"The reversed array is : " <<endl;
for (int i = 0; i < size; i++)
{
    cout<<array[i]<<" ";
}
cout<<endl;



return 0;
}