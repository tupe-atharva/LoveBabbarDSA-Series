#include<iostream>
using namespace std;

void print (int *arr , int size){
    cout << "The size is : " << size << endl;

    for (int i = 0; i < size; i++)
    {
       cout << arr[i] << " " ;
    } cout << endl;
    
}

bool isPresent(int *arr , int size, int key){
    
    // Iterations will be like :
    print(arr , size);
    
    // Base Case : When array's size becomes 0 and key is not yet found then return false.
    if (size == 0)
        return false;

    // Initial Process : 
    if (arr[0] == key)
        return true;

    // Recursive Relation :
    bool present = isPresent(arr + 1 , size - 1, key);
    return present;
    
    
}

int main(){ 
 
    int arr[] = {1,21,12,0,6,43};
    int size = 6;
    int key = 12;
    int ans = isPresent(arr , size ,key);
    cout << endl;
    if (ans)
        cout << "The Key is present ! " << endl;
    else 
        cout << "The key is NOT Present " << endl;
    cout << endl;
    return 0;
}