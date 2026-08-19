#include <iostream>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};

// Convert array/vector to linked list
ListNode *arrayToLinkedList(vector<int> &arr)
{
    if (arr.empty())
        return NULL;

    ListNode *head = new ListNode(arr[0]);
    ListNode *temp = head;

    for (int i = 1; i < arr.size(); i++)
    {
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }

    return head;
}

// Reverse linked list
ListNode *reverseLinkedList(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    ListNode *newHead = reverseLinkedList(head->next);

    ListNode *front = head->next;
    front->next = head;
    head->next = NULL;

    return newHead;
}

// Check palindrome
bool isPalindrome(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return true;

    ListNode *slow = head;
    ListNode *fast = head;

    // Find middle
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse second half
    ListNode *secondHalf = reverseLinkedList(slow->next);

    ListNode *first = head;
    ListNode *second = secondHalf;

    // Compare both halves
    while (second != NULL)
    {
        if (first->val != second->val)
        {
            reverseLinkedList(secondHalf); // Restore list
            return false;
        }

        first = first->next;
        second = second->next;
    }

    // Restore original linked list
    reverseLinkedList(secondHalf);

    return true;
}

// Display linked list
void printLinkedList(ListNode *head)
{
    while (head != NULL)
    {
        cout << head->val;

        if (head->next != NULL)
            cout << " -> ";

        head = head->next;
    }

    cout << endl;
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Convert array to linked list
    ListNode *head = arrayToLinkedList(arr);

    cout << "\nLinked List: ";
    printLinkedList(head);

    // Check palindrome
    if (isPalindrome(head))
        cout << "Palindrome" << endl;
    else
        cout << "Not a Palindrome" << endl;

    return 0;
}