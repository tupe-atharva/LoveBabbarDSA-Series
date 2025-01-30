
// // Find unique 
// // Find duplicate
// // Find intersection bw 2 arrays
// // Pair Sum
// // Triplet Sum
// // Sort 0s and 1s

// #include<iostream>
// using namespace std;

// void alternateReverse(int array[] , int size){
// int i = 0, j = 1;
//     while (i < size)
//     {
//         swap (array[i] , array[j]);
//         i+=2;
//         j+=2;
//     }
// }

// int main(){
//     int size;
//     cout<<"Enter the Array's Size : " << endl;
//     cin >> size;
//     int array[size];
//     cout << "Enter the Array's elements : " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cin>>array[i];
//     }
 
// // {1,2,3,4,5,6} --> {2,1,4,3,6,5}
// // ---------- Approach ---------- //

// //intialize 2 pointers to start from 1st and second position of the array and swap them, after swapping both should increment by 2.

// alternateReverse (array , size);
// cout << "The Array's elements after alternate swapping : " << endl;
// for (int i = 0; i < size; i++)
// {
//     cout<<array[i]<<" ";
// }
// cout<<endl;
 
// return 0;
// }


#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int nums [8] = { 1,2,3,4,5,6,7,8};
int target = 15 ;
int length = sizeof (nums)/4;
cout<<length<<endl;
        // for (int i = 0 ; i < length ; i++)
        // {
            int a = 0 ;
            for (int a1 = nums[a] ; a < length ; a++)
            {
                int  b = 1;
                for(int b1 = nums[b] ; b < length ; ++b)
                {
                    if( a1 + b1 == target)
                    {
                        cout<<a<<" "<<b<<"hello"<<endl;
                    }
                    // else{
                    //     cout<<"NAHI CHALRA"<<endl;
                    // }
                }
                cout<<b<<endl;
            //}
        }

return 0;
}