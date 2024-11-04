#include <iostream>
using namespace std;

class PerfectSquareChecker {
public:
    // Method to check if a number is a perfect square
    bool isPerfectSquare(int n) {
        if (n < 0) return false; // Negative numbers are not perfect squares

        int start = 1;
        int end = n;

        while (start <= end) {
            int mid = start + (end - start) / 2; // Calculate the middle point
            long long currSquare = static_cast<long long>(mid) * mid; // Calculate mid squared

            if (currSquare == n) {
                return true; // Found the perfect square
            } else if (currSquare > n) {
                end = mid - 1; // Adjust search range to lower half
            } else {
                start = mid + 1; // Adjust search range to upper half
            }
        }

        return false; // Number is not a perfect square
    }
};

int main() {
    int testCases;
    cin >> testCases; // Read the number of test cases

    PerfectSquareChecker checker; // Create an instance of the PerfectSquareChecker class

    while (testCases--) {
        int n;
        cin >> n; // Read the number to check

        if (checker.isPerfectSquare(n)) {
            cout << "YES" << endl; // Print "YES" if n is a perfect square
        } else {
            cout << "NO" << endl; // Print "NO" if n is not a perfect square
        }
    }

    return 0; // End of the program
}
