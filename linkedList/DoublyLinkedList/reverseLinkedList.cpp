#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

Node* reverseDLL(Node* head) {
    Node* curr = head;

    while (curr != nullptr) {

        // Swap next and prev
        Node* temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;

        // Move to the next node
        // After swapping, curr->prev contains the old next
        curr = curr->prev;
    }

    // After reversal, old tail becomes the new head
    if (head != nullptr) {
        head = head->prev;
    }

    return head;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    // Creating:
    // 1 <-> 2 <-> 3 <-> 4

    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);

    head->next = second;

    second->prev = head;
    second->next = third;

    third->prev = second;
    third->next = fourth;

    fourth->prev = third;

    cout << "Original DLL: ";
    printList(head);

    head = reverseDLL(head);

    cout << "Reversed DLL: ";
    printList(head);

    return 0;
}