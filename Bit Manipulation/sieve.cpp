#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution
{
public:
    vector<int> primes;

    // Function to generate primes up to sqrt(N) using Sieve of Eratosthenes
    void sieve(int N)
    {
        int limit = sqrt(N) + 1;
        vector<bool> isPrime(limit + 1, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i <= limit; ++i)
        {
            if (isPrime[i])
            {
                primes.push_back(i);
                for (int j = i * i; j <= limit; j += i)
                {
                    isPrime[j] = false;
                }
            }
        }
    }

    // Function to find prime factors of N
    vector<int> findPrimeFactors(int N)
    {
        sieve(N); // Generate primes up to sqrt(N)
        vector<int> primeFactors;

        for (int prime : primes)
        {
            while (N % prime == 0)
            {
                primeFactors.push_back(prime);
                N /= prime;
            }
        }

        // If N is still greater than 1, it must be a prime number
        if (N > 1)
        {
            primeFactors.push_back(N);
        }

        return primeFactors;
    }
};

int main()
{
    Solution solution;
    int N;
    cout << "Enter a positive number: ";
    cin >> N;

    vector<int> primeFactors = solution.findPrimeFactors(N);

    cout << "Prime factors of " << N << " are: ";
    for (int factor : primeFactors)
    {
        cout << factor << " ";
    }
    cout << endl;

    return 0;
}
