// Theory is in notes.
// Basic Idea : 
// Initialize minIdx with i then
// for i = 0, check all elements following i = 0, select the index of the smallest element in i = 1 to i = size - 1, then swap the minimum element with arr[i].

#include<iostream>
using namespace std;

void selectionSort (int arr[] , int size){
for (int i = 0; i < size; i++)
{
   int minIdx = i;
   for (int j = i + 1 ; j < size; j++)
   {
    if (arr[j] < arr[minIdx])
    {
       minIdx = j;
    }
   }
   swap(arr[minIdx] , arr[i]); 
}

cout << "The array after selection sort is : " << endl;
for (int k = 0; k < size; k++)
{
    cout << arr[k] << " " ;
}
cout << endl;


}

int main()
{
    int arr[] = {54,34,76,12,37,23,90,98,1007,1};
    int size = sizeof(arr)/sizeof(int);
    selectionSort (arr , size);
    return 0;
}