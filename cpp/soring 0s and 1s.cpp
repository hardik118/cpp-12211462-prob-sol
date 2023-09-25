#include <iostream>

using namespace std;

struct ListNode {
    int value;
    ListNode* next;

    ListNode(int val) : value(val), next(nullptr) {}
};

void printList(ListNode* head) {
    ListNode* current = head;
    while (current) {
        cout << current->value << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
}

ListNode* sortZeroesAndOnes(ListNode* head) {
    if (!head || !head->next) {
        return head;
    }

    ListNode* zeroHead = new ListNode(0);  // Dummy node for zeros
    ListNode* oneHead = new ListNode(1);   // Dummy node for ones
    ListNode* zeroTail = zeroHead;
    ListNode* oneTail = oneHead;

    ListNode* current = head;

    while (current) {
        if (current->value == 0) {
            zeroTail->next = current;
            zeroTail = zeroTail->next;
        } else {
            oneTail->next = current;
            oneTail = oneTail->next;
        }
        current = current->next;
    }

    // Connect the end of the zero list to the start of the one list
    zeroTail->next = oneHead->next;
    // Make sure to end the one list properly
    oneTail->next = nullptr;

    ListNode* sortedHead = zeroHead->next;

    // Clean up the dummy nodes
    delete zeroHead;
    delete oneHead;

    return sortedHead;
}

int main() {
    // Create a linked list with 0s and 1s
    ListNode* head = new ListNode(0);
    head->next = new ListNode(1);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(1);
    head->next->next->next->next = new ListNode(0);

    cout << "Original linked list:" << endl;
    printList(head);

    ListNode* sortedHead = sortZeroesAndOnes(head);

    cout << "Sorted linked list:" << endl;
    printList(sortedHead);

    // Clean up memory
    ListNode* current = sortedHead;
    while (current) {
        ListNode* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}

