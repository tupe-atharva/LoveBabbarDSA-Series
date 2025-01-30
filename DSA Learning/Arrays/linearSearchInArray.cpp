// given an array, search for a specific element in it.


#include<iostream>
using namespace std;

bool search (int arr[] ,int num, int size){
    //bool search = false;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            return 1;
            //search = true;
            break; // exits the loop when target elemnet is found.
        }
        
    }
    return 0;
    //return search;
}
// Optimized the searching function by adding a break statement and by removing the boolean variable search. (simply return 1 for present and 0 for absent)





int main(){

    int array[100];
    int size, n;
    cout<<"Enter the size of the array : " <<endl;
    cin>>size;
    cout<<"Enter the array's elements : " <<endl;

    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }

    cout<<"Enter the element to search : " <<endl;
    cin>>n;
    
    bool ans = search(array, n , size);

    // ❌ search(array[size], n , size); → Wrong (passing an int instead of an array)
    // ✅ search(array, n, size); → Correct (passing the whole array)
    if (ans)
    {
        cout<< "The entered element is present " <<endl;
    }
    else{
        cout<< "The entered element is NOT present  " <<endl;
    }
    

return 0;
}