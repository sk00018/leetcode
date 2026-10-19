#include <iostream>
#include <string>
using namespace std;

int main() {
string s;
cout << "Enter a string: ";
cin >> s;


int maxLength = 0;

for (int i = 0; i < s.length(); i++) {
    bool visited[256] = {false};
    int length = 0;

    for (int j = i; j < s.length(); j++) {
        unsigned char ch = s[j];

        if (visited[ch]) {
            break;
        }

        visited[ch] = true;
        length++;
    }

    if (length > maxLength) {
        maxLength = length;
    }
}

cout << "Longest substring length: " << maxLength << endl;

return 0;


}

