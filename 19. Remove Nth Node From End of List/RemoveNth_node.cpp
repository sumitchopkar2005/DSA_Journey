#include <iostream>
#include <vector>

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            size++;
            temp = temp->next;
        }
        
        int mid = size - n;
        if (mid == 0) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        int pos = 0;
        while (pos != mid) {
            prev = curr;
            curr = curr->next;
            pos++;
        }
        
        prev->next = curr->next;
        delete curr;
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
    int n = 2;

    ListNode* head = createLinkedList(values);

    cout << "Original list: ";
    printList(head);

    head = solver.removeNthFromEnd(head, n);

    cout << "After removing " << n << "-th node from end: ";
    printList(head);

    freeList(head);

    return 0;
}