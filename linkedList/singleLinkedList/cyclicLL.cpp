#include <iostream>
#include <vector>
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

Node* convertArrToLL(vector<int>& arr) {
    if (arr.empty()) return NULL;

    Node* head = new Node(arr[0]);
    Node* temp = head;

    for (int i = 1; i < arr.size(); i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }

    return head;
}

bool hasCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return true;
    }

    return false;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    Node* head = convertArrToLL(arr);

    Node* temp = head;
    Node* cycleNode = head->next->next;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = cycleNode;

    cout << (hasCycle(head) ? "Cycle detected" : "No cycle") << endl;

    return 0;
}