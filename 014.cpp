#include <iostream>
using namespace std;

int main() {
    string a, b, c;
    
    cin >> a >> b >> c;

    int i = 0;

    while (a[i] == b[i] && a[i] == c[i]) {
        i++;
    }

    for (int j = 0; j < i; j++) {
        cout << a[j];
    }

    return 0;
}