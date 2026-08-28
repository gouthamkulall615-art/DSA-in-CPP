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
    if (n == 0)
        return NULL;

    Node* head = new Node(arr[0]);
    Node* temp = head;

    for (int i = 1; i < n; i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }

    return head;
}

Node* getKthNode(Node* temp, int k) {
    k = k - 1;

    while (temp != NULL && k > 0) {
        k--;
        temp = temp->next;
    }

    return temp;
}

Node* reverseLinkedList(Node* head) {
    Node* prev = NULL;
    Node* temp = head;

    while (temp != NULL) {
        Node* nextNode = temp->next;
        temp->next = prev;
        prev = temp;
        temp = nextNode;
    }

    return prev;
}

Node* reverseKGroup(Node* head, int k) {
    Node* temp = head;
    Node* prevNode = NULL;

    while (temp != NULL) {
        Node* kthNode = getKthNode(temp, k);

        if (kthNode == NULL) {
            if (prevNode != NULL)
                prevNode->next = temp;

            break;
        }

        Node* nextNode = kthNode->next;

        kthNode->next = NULL;

        reverseLinkedList(temp);

        if (temp == head) {
            head = kthNode;
        } 
        else {
            prevNode->next = kthNode;
        }

        prevNode = temp;
        temp = nextNode;
    }

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
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 8;
    int k = 3;

    Node* head = arrayToLL(arr, n);

    cout << "Original Linked List: ";
    printLL(head);

    head = reverseKGroup(head, k);

    cout << "After reversing in groups of " << k << ": ";
    printLL(head);

    return 0;
}