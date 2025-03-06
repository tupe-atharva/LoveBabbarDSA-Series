// // We have to check for palindrome. Not case sensitive so convert the entered string to lower case, then use 2 pointer approach at start and end of the array and then check if they are equal. if arr[start] or arr[end] == a special character skip and move to the next character.


// #include<iostream>
// #include<vector>
// using namespace std;

// // bool checkPalindrome (char ch[] , int len)
// // {
// //     int start = 0 , end = len - 1;
// //     while (start <= end)
// //     {
// //         if (ch[start] != ch[end]){
// //             return false;
// //         }
// //         else{
// //             start++;
// //             end--;
// //         }
// //     }
// //     return true;
// // }

// char toLower(char ch[] , int len)
//     {
//         for (int i = 0 ; i<len; i++){
//             if (ch[i] > 'a' && ch[i]< 'z'){
//                 return ch[i];
//             }
//             else{
//                 char temp = ch[i] - 'A' + 'a';
//                 return temp;
//             }
//         }

//     }

// int main()
// {
//     // Reverse the string first, then use a 2 pointer approach and traverse from start and end and check if the characters are same.

//     char ch[100] ;
//     cout << "Enter a string" << endl ;
//     cin >> ch;

//     int count = 0;
//     for (int i = 0; ch[i] != '\0'; i++)
//     {
//         count++;
//     }

//     vector<char>lower[100]; 
//     lower->push_back(toLower(ch , count));
//     for (int i = 0; i < lower.size(); i++)
//     {
//        cout << lower[i] << " ";
//     }
//     cout << endl;
    
//     return 0;
// }