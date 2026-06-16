#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        vector<ListNode*> arr;
        ListNode* curr = head;
        while (curr != nullptr) {
            arr.push_back(curr);
            curr = curr->next;
        }
        int n = arr.size();
        swap(arr[k - 1]->val, arr[n - k]->val);
        return head;
    }
};

ListNode* createLinkedList(const vector<int>& arr) {
    if (arr.empty()) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;
    for (size_t i = 1; i < arr.size(); i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

void printList(ListNode* head) {
    ListNode* curr = head;
    while (curr != nullptr) {
        cout << curr->val;
        if (curr->next != nullptr) cout << " -> ";
        curr = curr->next;
    }
    cout << "\n";
}

void freeList(ListNode* head) {
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Solution solver;

    vector<int> values = {1, 2, 3, 4, 5};
    int k = 2;

    ListNode* head = createLinkedList(values);

    cout << "Original list: ";
    printList(head);

    head = solver.swapNodes(head, k);

    cout << "After swapping: ";
    printList(head);

    freeList(head);

    return 0;
}