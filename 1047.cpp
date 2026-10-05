#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ans = "";

    for (int i = 0; i < s.length(); i++) {

        if (ans.length() > 0 && ans.back() == s[i]) {
            ans.pop_back();
        }
        else {
            ans.push_back(s[i]);
        }
    }

    cout << ans;

    return 0;
}