#include <iostream>
using namespace std;

class Solution {
public:
    int removeDuplicates(int nums[], int n) {
        if (n == 0)
            return 0;

        int j = 1;

        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[i - 1]) {
                nums[j] = nums[i];
                j++;
            }
        }

        return j;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int nums[100];

    cout << "Enter sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int k = obj.removeDuplicates(nums, n);

    cout << "Output: " << k << endl;

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}