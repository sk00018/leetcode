#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;

        while (list1 != NULL && list2 != NULL) {

            if (list1->val <= list2->val) {
                current->next = list1;
                list1 = list1->next;
            }
            else {
                current->next = list2;
                list2 = list2->next;
            }

            current = current->next;
        }

        if (list1 != NULL)
            current->next = list1;
        else
            current->next = list2;

        return dummy->next;
    }
};

int main() {

    int n, m;

    cout << "Enter size of first list: ";
    cin >> n;

    ListNode* list1 = NULL;
    ListNode* tail1 = NULL;

    cout << "Enter elements of first list: ";

    for (int i = 0; i < n; i++) {

        int x;
        cin >> x;

        ListNode* newNode = new ListNode(x);

        if (list1 == NULL) {
            list1 = newNode;
            tail1 = newNode;
        }
        else {
            tail1->next = newNode;
            tail1 = newNode;
        }
    }

    cout << "Enter size of second list: ";
    cin >> m;

    ListNode* list2 = NULL;
    ListNode* tail2 = NULL;

    cout << "Enter elements of second list: ";

    for (int i = 0; i < m; i++) {

        int x;
        cin >> x;

        ListNode* newNode = new ListNode(x);

        if (list2 == NULL) {
            list2 = newNode;
            tail2 = newNode;
        }
        else {
            tail2->next = newNode;
            tail2 = newNode;
        }
    }

    Solution obj;

    ListNode* result = obj.mergeTwoLists(list1, list2);

    cout << "Merged list: ";

    while (result != NULL) {
        cout << result->val << " ";
        result = result->next;
    }

    return 0;
}