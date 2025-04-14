
#include<bits/stdc++.h>
using namespace std;

void sieve(int n)
{
    bool isPrime[n+1];

    // Initialize all numbers as prime
    for(int i=0; i<=n; i++)
    {
        isPrime[i] = true;
    }

    // 0 and 1 are not prime numbers
    isPrime[0]=isPrime[1]=false;

    // Sieve of Eratosthenes
    for(int p=2; p*p<=n; p++)
    {
        if(isPrime[p])
        {
            // Marking multiples of p as non-prime
            for(int i=p*p; i<=n; i+=p)
            {
                isPrime[i]=false;
            }
        }
    }

    // Output all prime numbers less than or equal to n
    for(int i=2; i<=n; i++)
    {
        if(isPrime[i])
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    int n;
    // Prompting the user for input
    cout << "Enter a number to find all primes less than or equal to it: ";
    cin >> n;

    // Calling the sieve function to find primes
    sieve(n);

    return 0;
}
