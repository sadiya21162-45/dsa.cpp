#include <iostream>
#include <cstring>  // For strlen function

using namespace std;

int isalnum(char A[]) {
    int n = strlen(A);  // Step 1: Find the length of the character array

    // Step 2: Traverse each character in the array
    for (int i = 0; i < n; i++) {
        // Step 3: Check if the character is NOT alphanumeric
        if (!((A[i] >= 'a' && A[i] <= 'z') || 
              (A[i] >= 'A' && A[i] <= 'Z') || 
              (A[i] >= '0' && A[i] <= '9'))) {
            return 0;  // If any non-alphanumeric character is found, return 0
        }
    }
    
    // Step 4: If all characters are alphanumeric, return 1
    return 1;
}

int main() {
    char A[] = "Hello123";  // Example input
    int result = isalnum(A);  // Call the function
    cout << "Is alphanumeric: " << result << endl;  // Output the result
    return 0;
}
