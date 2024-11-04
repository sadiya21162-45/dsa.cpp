#include <iostream>
using namespace std;

class SummationGame {
public:
    // Method to calculate the sum of natural numbers from 1 to N
    int calculateSum(int N) {
        // The formula for the sum of the first N natural numbers is: N * (N + 1) / 2
        return N * (N + 1) / 2;
    }
};

int main() {
    int N;
    
    // Prompt the user to enter a number
    cout << "Enter a positive integer N: ";
    cin >> N;
    
    // Validate the input
    if (N <= 0) {
        cout << "Please enter a positive integer greater than 0." << endl;
        return 1; // Return an error code
    }
    
    // Create an instance of the SummationGame class
    SummationGame game;
    
    // Calculate the sum of natural numbers from 1 to N
    int result = game.calculateSum(N);
    
    // Print the result
    cout << "The sum of all natural numbers from 1 to " << N << " is: " << result << endl;
    
    return 0; // End of the program
}
