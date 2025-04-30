// This algo is used to check the number of prime numbers upto a given limit.
// Steps :
// 1. Create a list of all numbers from 2 to n - mark all numbers as prime initially.
// 2. Start with the first number (ie. 2) and mark all of it's multiples as non-prime.
// 3. Move to the next unmarked number and mark all it's multiples as well.
// 4. Repeat untill you have processed numbers upto root(n); 


#include<iostream>
#include<vector>
using namespace std;
 


    int countPrimes(int n) 
    {
        int count = 0;

        // create a boolean vector of all numbers upto 'n' and mark all of them as prime initially.
        vector<bool> prime (n+1 , true);
        prime[0] = prime[1] = false; // set 0&1 as non-prime.

        // run a for-loop starting from the no. 2
        for (long long i = 2; i<n; i++)
        {
            if(prime[i]) // checks if i is a prime number, if yes - enter the block.
            {
                count++;

                // mark all multiples of i as non-prime now.
                for (long long j = i*i ; j<n ; j=j+i)
                {
                    prime[j] = false;
                }
            }
        }
    return count;
    }




int main()
{
    int n = 40;
    int ans = countPrimes(n);
    cout << "The number of primes smaller than " << n << " are : " << ans << endl;
 
 
    return 0;
}





// # Approach :-
// Write function that checks if a number is prime.
// Pass numbers from 2 - (n-1) to the function which returns true or false and update count accordingly.
// ### For a huge number like 50,00,000 - checking each and every number is not possible and we get a Time Limit Exceeded error at the runtime. Time Complexity - O (n^2)


// # Optimization Approach (Using the Sieve of Eratosthenes Algorithm):-

// # Steps :-
// 1. Create a boolean vector of all the numbers from 0 to n and mark all of them as prime initially.
// 2. Set 0 and 1 as non-prime.
// 3. Run a for-loop from 2 to n for checking prime.
// 4. Use an if condition -- if(prime[i]) --> enters the if block only if i is still marked as prime.
// 5. After entering the block, increase the count and mark all the multiples of i as non-prime as they are multiples so they cannot be prime. (do a dry run of the for-loop's condtion to check logic)
// 6. The loop goes from i to n and returns the count.

// # Optimization :-
// **In the inner for-loop's condition, instead of starting from the 2nd multiple of i, ie. 2* i, start from i* i.
// This is because 2i, 3i and all multiples of i upto i* i will alredy be marked as non-prime by earlier values of i.
// In this way we optimize the algo to not check the crossed out multiples.**
