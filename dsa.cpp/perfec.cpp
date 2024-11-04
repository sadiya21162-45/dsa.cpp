#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases; // Read the number of test cases

    while (testCases--) {
        int n;
        cin >> n; // Read the number to check if it's a perfect square
        
        bool isPerfectSquare = false;
        int start = 1;
        int end = n;

        while (start <= end) {
            int mid = start + (end - start) / 2; // Find the middle point
            long long currSquare = (long long)mid * mid; // Calculate mid squared

            if (currSquare == n) {
                isPerfectSquare = true; // If squared value equals n, it's a perfect square
                break; // No need to search further
            } else if (currSquare > n) {
                end = mid - 1; // Adjust search range to the lower half
            } else {
                start = mid + 1; // Adjust search range to the upper half
            }
        }

        if (isPerfectSquare)
            cout << "YES" << endl; // Print "YES" if n is a perfect square
        else
            cout << "NO" << endl; // Print "NO" if n is not a perfect square
    }

    return 0; // End of the program
}
