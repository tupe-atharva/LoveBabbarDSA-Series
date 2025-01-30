// WAP to reverse an array

#include<iostream>
using namespace std;

void reverse ( int array [], int size){
    cout<<"The reversed array is : "; 
    for (int i = 1; i <= size; i++)
    {
        cout << array[size - i] << " ";
    }
    cout<<endl<<endl<<endl;
}

int main(){
int size, array[100];
cout << "Enter the size of the array : " << endl;
cin >> size;
cout << "Enter the array's elements : " <<endl;

for (int i = 0; i < size; i++)
{
    cin>>array[i];
}
cout<<endl<<endl;
reverse(array , size);



return 0;
}