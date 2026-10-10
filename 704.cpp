#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cin >> target;

    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            cout << mid;
            return 0;
        }

        else if (nums[mid] < target) {
            left = mid + 1;
        }

        else {
            right = mid - 1;
        }
    }

    cout << -1;

    return 0;
    
}