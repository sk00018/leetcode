#include <iostream>
using namespace std;

int main() {
int n;
cout << "Enter a number: ";
cin >> n;

int product = 1;
int sum = 0;

while (n > 0) {
    int digit = n % 10;

    product = product * digit;
    sum = sum + digit;

    n = n / 10;
}

cout << "Product of digits: " << product << endl;
cout << "Sum of digits: " << sum << endl;
cout << "Answer: " << product - sum << endl;

return 0;

}
