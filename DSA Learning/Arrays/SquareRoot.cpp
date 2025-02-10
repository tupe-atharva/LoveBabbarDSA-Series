// QUESTION :-
// we have to find the squar root of an entered integer. Return only the integer part.



// APPROACH : We know that for a given integer 'n' , the square root of n will lie between 0 and n (for eg. n = 9, so square root of 9 will lie bw 0 & 9). So our search space is 0-n. Let's use binary search, with the condition - if mid**2 == n, if yes, return the mid, else move towards left or right part of mid depending on the value of mid**2 - if greater move leftwards, else move rightwards.



#include <iostream>
using namespace std;

int squareRoot(int n) {
    int ans = 0;
    int start = 0, end = n;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;
        long long square = (long long)mid * mid;  // Use long long to avoid integer overflow

        if (square == n) {
            return mid;  // Immediately return if exact square root is found
        } 
        else if (square > n) {
            end = mid - 1;  // Move left
        } 
        else {
            ans = mid;  // Store last valid integer square root
            start = mid + 1;  // Move right
        }
    }

    return ans;  // Return integer square root if exact match isn't found
}

int main() {
    int n = 36;  // Change this value to test other cases
    cout << "Hello" << endl;
    int ans = squareRoot(n);
    cout << "The square root of N is: " << ans << endl;
    return 0;
}
