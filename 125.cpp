#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string s) {
    string clean = "";

    // Remove spaces and special characters
    // and convert uppercase to lowercase
    for (char ch : s) {
        if (isalnum(ch)) {
            clean += tolower(ch);
        }
    }

    // Check palindrome
    int left = 0;
    int right = clean.length() - 1;

    while (left < right) {
        if (clean[left] != clean[right]) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    if (isPalindrome(s))
        cout << "Valid Palindrome";
    else
        cout << "Not a Valid Palindrome";

    return 0;
}