#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

// Convert array to linked list
Node* arrayToList(int arr[], int n) {

    Node* head = new Node(arr[0]);
    Node* tail = head;

    for (int i = 1; i < n; i++) {
        tail->next = new Node(arr[i]);
        tail = tail->next;
    }

    return head;
}

// Sort 0s, 1s and 2s
Node* segregate(Node* head) {

    Node* zeroHead = new Node(-1);
    Node* oneHead = new Node(-1);
    Node* twoHead = new Node(-1);

    Node* zero = zeroHead;
    Node* one = oneHead;
    Node* two = twoHead;

    Node* temp = head;

    while (temp != NULL) {

        if (temp->data == 0) {
            zero->next = temp;
            zero = temp;
        }
        else if (temp->data == 1) {
            one->next = temp;
            one = temp;
        }
        else {
            two->next = temp;
            two = temp;
        }

        temp = temp->next;
    }

    // Connect the lists
    zero->next = oneHead->next;
    one->next = twoHead->next;
    two->next = NULL;

    return zeroHead->next;
}

// Print linked list
void printList(Node* head) {

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }

    cout << endl;
}

int main() {

    int arr[] = {2, 1, 0, 2, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Array → Linked List
    Node* head = arrayToList(arr, n);

    cout << "Before: ";
    printList(head);

    // Sort
    head = segregate(head);

    cout << "After: ";
    printList(head);

    return 0;
}