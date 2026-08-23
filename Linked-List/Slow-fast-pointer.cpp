#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
};

bool hasCycle(ListNode* head) {

    if (head == nullptr) {
        return false;
    }

    if (head->next == nullptr) {
        return false;
    }

    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != nullptr && fast->next != nullptr) {

        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true;
        }
    }

    return false;
}

int main() {

    // Create nodes
    ListNode* first = new ListNode();
    ListNode* second = new ListNode();
    ListNode* third = new ListNode();

    // Give them values
    first->val = 10;
    second->val = 20;
    third->val = 30;

    // Connect them
    first->next = second;
    second->next = third;

    // No cycle
    third->next = nullptr;

    cout << hasCycle(first);

    return 0;
}