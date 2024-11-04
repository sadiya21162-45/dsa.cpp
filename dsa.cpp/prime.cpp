#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n; // Read the integer input n from standard input
    
    if (n < 2) {
        cout << "NO" << endl; // Numbers less than 2 are not prime
        return 0; // Exit the program
    }
    
    // Create a vector to keep track of prime numbers
    vector<bool> primes(n + 1, true);
    primes[0] = primes[1] = false; // 0 and 1 are not prime numbers
    
    // Implementing the Sieve of Eratosthenes algorithm
    for (int i = 2; i * i <= n; ++i) {
        if (primes[i]) {
            for (int j = i * i; j <= n; j += i) {
                primes[j] = false; // Mark multiples of i as not prime
            }
        }
    }
    
    // Check if the number n is prime and output the result
    if (primes[n]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
