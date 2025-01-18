#include<iostream>
using namespace std;
int main(){

int n = 4;

// PATTERN 1 : ****
//             ****
//             ****
//             ****

// for (int i = 0; i < 4; i++)
// {
//    for (int j = 0; j < 4; j++)
//    {
//     cout<<"*";
//    }
//     cout<<endl;
   
// }

// PATTERN 2 : 1 1 1
//             2 2 2
//             3 3 3

// for (int i = 1; i <=3; i++)
// {
//    for (int j = 1; j <=3; j++)
//    {
//     cout<<i<<" ";
//    }
//    cout<<endl;
// }


// PATTERN 3 : 1 2 3 4
//             1 2 3 4
//             1 2 3 4
//             1 2 3 4

// for (int i = 1; i <=4; i++)
// {
//    for (int j = 1; j <=4; j++)
//    {
//     cout<<j<<" ";
//    }
//    cout<<endl;
// }

// PATTERN 4 : 3 2 1
//             3 2 1
//             3 2 1

// for (int i = 1; i <=3; i++)
// {
//    for (int j = 1; j < 4; j++)
//    {
//     cout<<n-j+1<<" ";
//    }
//    cout<<endl;
// }



// PATTERN 5 : 1 2 3
//             4 5 6 
//             7 8 9

// int count = 1;
// for (int i = 1; i < 4; i++)
// {
//     for (int j = 1; j < 4; j++)
//     {
        
//        cout<<count<<" ";  
//        count++;
//     }
//     cout<<endl;
    
// }


// PATTERN 6 : *
//             * *
//             * * *


// for (int i = 1; i <=n; i++)
// {
//     for (int j = 1; j <= i; j++)
//     {
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
    

// }

// PATTERN 7 : 1
//             2 2
//             3 3 3
//             4 4 4 4



// for (int i = 1; i <=n; i++)
// {
    
//    for (int j = 1; j <=i; j++)
//    {
//     cout<<i<<" ";
//    }
//    cout<<endl;
// }


// PATTERN 8 : 1
//             2 3 
//             4 5 6
//             7 8 9 10

// int count = 1;
// for (int i = 1; i <=4; i++)
// {
//    for (int j = 1; j <=i ; j++)
//    {
//     cout<<count<<" ";
//     count++;
//    }
  
//    cout<<endl;
// }

// PATTERN 9 : 1
//             2 3 
//             3 4 5
//             4 5 6 7 

// for (int i = 1; i <=4; i++)
// {
//    int value = i;
//    here everytime the row starts with the row number, so store the row number in value variable and then in the inside loop - it should run as much as the row number and the value variable should increment starting from the row number ie. i.

//     for (int j = 1; j <=i; j++)
//     {
//        cout<<value<<" ";
//         value++;
//     }
    
//     cout<<endl;
// }

// PATTERN 10 : 1
//              2 1
//              3 2 1 
//              4 3 2 1
// for(int i = 1; i <=4; i++)
// {
//     int value = i;
//     for (int j = 1; j <=i; j++)
//     {
//        cout<<value<<" ";
//        value--;
//     }
//     cout<<endl;
// }


// PATTERN 11 : A A A
//              B B B
//              C C C

// for (int i = 1; i <=3; i++)
// {
//     for (int j = 1; j <=3; j++)
//     {
//         cout<<char('A'+i-1)<<" "; 
//         // typecast the equation to a character value
//     } 
    // use 'A' + i - 1 equation as with a new row we want the value to be printed as 'A' then 'B' for row 2 then 'C' for row 3.
    
//     cout<<endl;
// }


// PATTERN 12 : A B C
//              A B C 
//              A B C

// for (int i = 1; i <=3; i++)
// {
//     char ch = 'A';
//    for(int j = 1; j <=3; j++)
//    {
//         cout<<ch<<" ";
//         ch++;
//    }
//    cout<<endl;
// }

// PATTERN 13 : A B C
//              D E F 
//              G H I

// char ch = 'A';
// for (int i = 1; i <=3; i++)
// {
// //    for every new row instead of resetting ch value to 'A', keep it outside the outer for loop so it increments everytime without resetting.
//    for(int j = 1; j <=3; j++)
//    {
//         cout<<ch<<" ";
//         ch++;
//    }
//    cout<<endl;
// }


// PATTERN 14 : A B C 
//              B C D
//              C D E

// char ch = 'A';
// for (int i = 1; i <=3; i++)
// {
//     char value = ch + i-1;
//    for(int j = 1; j <=3; j++)
//    {
//         cout<<value<<" ";
//         value++;
//    }
//    cout<<endl;
// }


// PATTERN 15 : A
//           B B
//           C C C

// char ch = 'A';
// for (int i = 1; i <=3; i++)
// {
//    for(int j = 1; j <=i; j++)
//    {
//         cout<<ch<<" "; 
//    }
//    cout<<endl;
//    ch++;
// }


return 0;
}