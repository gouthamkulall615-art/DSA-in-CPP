#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* arrayToLL(int arr[], int n) {
    if (n == 0) return NULL;

    Node* head = new Node(arr[0]);
    Node* temp = head;

    for (int i = 1; i < n; i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }

    return head;
}

Node* findNthNode(Node* temp, int k) {
    int cnt = 1;

    while (temp != NULL) {
        if (cnt == k)
            return temp;

        cnt++;
        temp = temp->next;
    }

    return NULL;
}

Node* rotateRight(Node* head, int k) {
    if (head == NULL || k == 0)
        return head;

    Node* tail = head;
    int len = 1;

    while (tail->next != NULL) {
        tail = tail->next;
        len++;
    }

    if (k % len == 0)
        return head;

    k = k % len;

    tail->next = head;

    Node* newLastNode = findNthNode(head, len - k);

    head = newLastNode->next;
    newLastNode->next = NULL;

    return head;
}

void printLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2;

    Node* head = arrayToLL(arr, n);

    cout << "Original Linked List: ";
    printLL(head);

    head = rotateRight(head, k);

    cout << "After rotating right by " << k << ": ";
    printLL(head);

    return 0;
}