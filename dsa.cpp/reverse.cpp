#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    // Function to reverse the string word by word
    string reverseWords(string A) {
        // Step 1: Remove leading, trailing, and multiple spaces
        A = trimSpaces(A);
        
        // Step 2: Split the string into words
        vector<string> words = splitWords(A);
        
        // Step 3: Reverse the order of the words
        reverse(words.begin(), words.end());
        
        // Step 4: Join the reversed words into a single string
        return joinWords(words);
    }
    
private:
    // Utility function to trim leading, trailing, and extra spaces between words
    string trimSpaces(string &A) {
        int left = 0, right = A.size() - 1;
        
        // Remove leading spaces
        while (left <= right && A[left] == ' ') left++;
        
        // Remove trailing spaces
        while (right >= left && A[right] == ' ') right--;
        
        // Reduce multiple spaces between words to a single space
        string trimmed = "";
        while (left <= right) {
            if (A[left] != ' ') {
                trimmed += A[left];
            } else if (trimmed.back() != ' ') {
                trimmed += ' ';
            }
            left++;
        }
        return trimmed;
    }
    
    // Utility function to split the string into words
    vector<string> splitWords(const string &A) {
        vector<string> words;
        string word = "";
        for (char c : A) {
            if (c == ' ') {
                if (!word.empty()) {
                    words.push_back(word);
                    word = "";
                }
            } else {
                word += c;
            }
        }
        if (!word.empty()) {
            words.push_back(word);
        }
        return words;
    }
    
    // Utility function to join words into a single string
    string joinWords(const vector<string>& words) {
        string result = "";
        for (int i = 0; i < words.size(); i++) {
            result += words[i];
            if (i < words.size() - 1) {
                result += " ";  // Add space between words, but not after the last word
            }
        }
        return result;
    }
};

int main() {
    string A = "  I  love   programming  ";  // Example input string
    Solution sol;
    string result = sol.reverseWords(A);
    cout << "Reversed string: \"" << result << "\"" << endl;
    return 0;
}
