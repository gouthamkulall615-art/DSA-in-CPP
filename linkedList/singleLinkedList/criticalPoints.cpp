#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

// Structure of a linked list node
struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

// Convert array/vector to linked list
ListNode* convertToLinkedList(vector<int> arr) {
    if (arr.empty())
        return nullptr;

    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;

    for (int i = 1; i < arr.size(); i++) {
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }

    return head;
}

// Convert linked list to array/vector
vector<int> convertToArray(ListNode* head) {
    vector<int> arr;

    ListNode* temp = head;

    while (temp != nullptr) {
        arr.push_back(temp->val);
        temp = temp->next;
    }

    return arr;
}

// Find minimum and maximum distance between critical points
vector<int> nodesBetweenCriticalPoints(ListNode* head) {

    int firstCritical = -1;
    int prevCritical = -1;
    int minDist = INT_MAX;

    ListNode* prev = head;
    ListNode* curr = head->next;

    int pos = 1;

    while (curr != nullptr && curr->next != nullptr) {

        // Check whether current node is a critical point
        bool isCritical =
            (curr->val > prev->val && curr->val > curr->next->val) ||
            (curr->val < prev->val && curr->val < curr->next->val);

        if (isCritical) {

            // First critical point
            if (firstCritical == -1) {
                firstCritical = pos;
            }

            // If we already have a previous critical point
            if (prevCritical != -1) {
                minDist = min(minDist, pos - prevCritical);
            }

            // Current critical point becomes previous critical point
            prevCritical = pos;
        }

        prev = curr;
        curr = curr->next;
        pos++;
    }

    // Fewer than two critical points
    if (firstCritical == -1 || firstCritical == prevCritical) {
        return {-1, -1};
    }

    // Maximum distance = last critical - first critical
    int maxDist = prevCritical - firstCritical;

    return {minDist, maxDist};
}

int main() {

    // Example
    vector<int> arr = {1, 5, 3, 7, 2};

    // Convert array to linked list
    ListNode* head = convertToLinkedList(arr);

    // Convert linked list back to array
    vector<int> resultArray = convertToArray(head);

    // Display linked list
    cout << "Linked List: ";

    for (int x : resultArray) {
        cout << x << " ";
    }

    cout << endl;

    // Find critical point distances
    vector<int> result = nodesBetweenCriticalPoints(head);

    // Display answer
    cout << "Minimum Distance: " << result[0] << endl;
    cout << "Maximum Distance: " << result[1] << endl;

    cout << "Answer: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}