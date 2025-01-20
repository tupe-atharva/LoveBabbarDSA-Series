#include<iostream>
using namespace std;
int main(){

int n = 4;


// ---------------------------------------------------------------------------


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


// ---------------------------------------------------------------------------


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


// ---------------------------------------------------------------------------



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


// ---------------------------------------------------------------------------


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


// ---------------------------------------------------------------------------


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


// ---------------------------------------------------------------------------



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


// ---------------------------------------------------------------------------



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


// ---------------------------------------------------------------------------


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


// ---------------------------------------------------------------------------


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


// ---------------------------------------------------------------------------


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


// ---------------------------------------------------------------------------



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



// ---------------------------------------------------------------------------



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


// ---------------------------------------------------------------------------


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


// ---------------------------------------------------------------------------


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



// ---------------------------------------------------------------------------


// PATTERN 15 : A
//              B B
//              C C C

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


// ---------------------------------------------------------------------------

// PATTERN 16 : A
//              B C
//              D E F
//              G H I J


// char ch = 'A';
// for (int i = 1; i <=4; i++)
// {
//    for(int j = 1; j <=i; j++)
//    {
//         cout<<ch<<" "; 
//          ch++;
//          // simply after printing the character, increment it for next iterations.
//          // j<=i ensures the patterns triangular shape
//         //  as the inner loop runs only according to the value of i
//    }
//    cout<<endl;
  
// }


// ---------------------------------------------------------------------------

// PATTERN 17 : A
//              B C 
//              C D E
//              D E F G 

// for (int i = 1; i <=4; i++)
// {
//     char ch = 65 + i-1;
//     //here 65 is the ASCII value for 'A'.
//   for (int j = 1; j <=i; j++)
//   {
//     cout<<ch<<" ";
//     ch++;
//   }
//   cout<<endl;
// }


// ---------------------------------------------------------------------------


// PATTERN 18 : D
//              C D 
//              B C D
//              A B C D


// char ch = 'A';

// for (int i = 1; i <=n; i++)
// {
//     char start = ch + n - i;
//     //this is the starting char of each row.
//     //now that we have the starting char for each row, just increment it every time the inner loop works.
//    for (int j = 1; j <=i; j++)
//    {
//      cout<<start<<" ";
//      start++;
//    }
//    cout<<endl;
// }


// ---------------------------------------------------------------------------

// PATTERN 19 :        *
//                   * *
//                 * * *
//               * * * *

// for (int i = 1; i <=n; i++)
// {
//     for (int k = 0; k<n-i; k++)
//     {
//         cout<<" "; 
//     }
//     //this k loop prints spaces witht the equation k<n-i. 
    
//    for (int j = 1; j<=i; j++)
//    {
//     cout<<"*";
//    }
//    cout<<endl;
// }


// ---------------------------------------------------------------------------


// PATTERN 20 : * * * *
//              * * *
//              * *
//              * 


// for (int i = 0; i <=n; i++)
// {
    
//     for (int j = 0; j<n-i; j++)
//     {
//        cout<<"*"<<" ";
//     }
//     cout<<endl;


//     // for (int k = 4; k < n+k; k--)
//     // {
//     //    cout<<" ";
//     // }
//     // there is no need to print the spaces man !
//     // simply print the stars in decreasing order


// }


// ---------------------------------------------------------------------------


// PATTERN 21 : * * * * 
//                * * *
//                  * *
//                    * 

//now here you need to print the spaces too and then print stars.


// for (int i = 0; i <=n; i++)
// {
//    for (int k = 0; k < i; k++)
//    {
//     cout<<" ";
//    }

//    for (int j = 0; j< n-i; j++) // consider the fact that for every row the number of stars is equal to n-i ie. for row 0 --> 4-0, for row 1 --> 4-1, for row 2 --> 4-2 and for row 3 --> 4-3. 
//    {
//     cout<<"*";
//    }
//    cout<<endl;
   
// }


// ---------------------------------------------------------------------------


// PATTERN 22 : 1 1 1 1
//                2 2 2
//                  3 3 
//                    4

//use the same logic as above but instead of printing stars, every row should print the row number.

// for (int i = 0; i <=n; i++)
// {
//    for (int k = 0; k < i; k++)
//    {
//     cout<<" ";
//    }

//    for (int j = 0; j< n-i; j++) // consider the fact that for every row the number of stars is equal to n-i ie. for row 0 --> 4-0, for row 1 --> 4-1, for row 2 --> 4-2 and for row 3 --> 4-3. 
//    {
//     cout<<i+1;
//    }
//    cout<<endl;
// }

// ---------------------------------------------------------------------------


// PATTERN 23 :      1
//                 2 2
//               3 3 3
//             4 4 4 4 

//APPROACH : print spaces first (for each row print n-i spaces) - use two   inner loops, one for spaces, one for number printing, then print the row number.

// for (int i = 1; i <=n; i++)
// {
//     for (int k = 1; k<=n-i; k++)
//     {
//         cout<<" ";
//     }

//     for (int j = 1; j <=i; j++)
//     {
//         cout<<i;
//     }
//     cout<<endl;
    
    
// }

// ---------------------------------------------------------------------------


// PATTERN 24 : 1 2 3 4
//                2 3 4 
//                  3 4
//                    4


// APPROACH : print spaces using a loop first (like above pattern), then print the value of j ie. the column number.

// for (int i = 1; i <=n; i++)
// {
//     for (int k = 1; k<i; k++)
//     {
//         cout<<" ";
//     }

//obsreve that in every row the numbers start from the value of i, ie for row 2, numbers start from 2 ...
//     for (int j = i; j<=n ; j++)
//     {
//         cout<<j;
//     }
//     cout<<endl;  
// }

// ---------------------------------------------------------------------------


// PATTERN 25 :   

//          _ _ _ 1
//          _ _ 1 2 1
//          _ 1 2 3 2 1
//          1 2 3 4 3 2 1


//APPROACH : let's try to print this pattern in stars first then move to numbers.

// for (int i = 1; i <=n; i++)
// {

//     //print spaces wala triangle
//    for (int k = 1; k<=n-i; k++)
//     {
//         cout<<" ";
//     }
   

//    //print 2nd triangle
//    for (int j = 1; j <=i; j++)
//    {
//    cout<<j;
//    }
  


//    // print 3rd triangle

//     int value = i-1;
//    for (int k = 0; k<i-1; k++)
//    {
//     // int value = i-1; (if this equation is here then for every iteratino value of variable value will be re-initialized to value of i, so instead declare this outside the loop)
//     //  cout<<"*";
//     //tried printing 3rd triangle with stars first 
//     // now lets replace stars with numbers.
//     // 1
//     // 2 1
//     // 3 2 1
//     // we can see that the numbers start from i and decrease.

//     cout<<value;
//     value--;
//    }
   
//     cout<<endl;
// }  
// ---------------------------------------------------------------------------


// HW PATTERN :    

//      1 2 3 4 5 5 4 3 2 1
//      1 2 3 4 * * 4 3 2 1
//      1 2 3 * * * * 3 2 1
//      1 2 * * * * * * 2 1
//      1 * * * * * * * * 1


// APPROACH : treat this pattern as three seperate triangles.


for (int i = 1; i <=5; i++)
{
    
    // triangle 1 

    for (int j = 1; j < 0; j++)
    {
        /* code */
    }
    





    // triangle 2 







    // triangle 3 
}


// ---------------------------------------------------------------------------


return 0;
}