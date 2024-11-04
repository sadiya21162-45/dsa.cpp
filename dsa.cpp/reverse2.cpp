#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm> // For reverse function

using namespace std;

string reverseWords(string A) {
    // Step 1: Trim leading, trailing, and reduce multiple spaces
    stringstream ss(A);
    string word;
    vector<string> words;
    
    // Step 2: Extract words from the string using stringstream
    while (ss >> word) {
        words.push_back(word); // Store each word into the vector
    }
    
    // Step 3: Reverse the order of words in the vector
    reverse(words.begin(), words.end());
    
    // Step 4: Join the words to form the reversed sentence
    string result;
    for (int i = 0; i < words.size(); i++) {
        result += words[i];
        if (i < words.size() - 1) {
            result += " "; // Add space between words
        }
    }

    return result;
}

int main() {
    string A = "  I love   programming  "; // Example input
    string reversed = reverseWords(A);     // Reversing the string
    cout << "Reversed string: \"" << reversed << "\"" << endl;
    return 0;
}
