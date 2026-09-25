#include <iostream>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        char st[10000];
        int top = -1;

        for (char ch : s) {

            if (ch == '(' || ch == '{' || ch == '[') {
                st[++top] = ch;
            }
            else {
                if (top == -1)
                    return false;

                if ((ch == ')' && st[top] != '(') ||
                    (ch == '}' && st[top] != '{') ||
                    (ch == ']' && st[top] != '[')) {
                    return false;
                }

                top--;
            }
        }

        return top == -1;
    }
};

int main() {
    Solution obj;
    string s;

    cout << "Enter brackets: ";
    cin >> s;

    if (obj.isValid(s))
        cout << "Output: true";
    else
        cout << "Output: false";

    return 0;
}