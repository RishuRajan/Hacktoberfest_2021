#include <iostream>
#include <vector>

using namespace std;

// Orignal Algorithm of Sieve of Eratosthenes
void SieveOfEratosthenes(int n) {
    vector<bool> prime(n + 1, true);
    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n + 1; j = j + i) prime[j] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p]) cout << p << " ";
}

// Code length is reduced the space & time complexities are same
void SieveShortCode(int n) {
    vector<bool> prime(n + 1, true);
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            cout << i << " ";
            for (int j = i * i; j <= n; j += i) 
                prime[j] = false;
        }
    }
}

int main() {
    int n = 100;
    SieveOfEratosthenes(n);
    SieveShortCode(n);
    return 0;
}

// O(nlog(log(n))) time complexity
// O(n) space complexity
 
