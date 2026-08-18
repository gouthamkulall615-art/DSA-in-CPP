#include <iostream>
#include <vector>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};

// Convert array/vector to linked list
ListNode *arrayToLL(vector<int> &arr)
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

// Print linked list
void printLL(ListNode *head)
{
    while (head != NULL)
    {
        cout << head->val << " -> ";
        head = head->next;
    }

    cout << "NULL" << endl;
}

// Remove Nth node from end
ListNode *removeNthFromEnd(ListNode *head, int n)
{

    ListNode *fast = head;
    ListNode *slow = head;

    // Move fast n steps ahead
    for (int i = 0; i < n; i++)
    {
        fast = fast->next;
    }

    // If we need to remove the first node
    if (fast == NULL)
    {
        ListNode *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    // Move both pointers
    while (fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }

    // Delete the node
    ListNode *temp = slow->next;
    slow->next = slow->next->next;

    delete temp;

    return head;
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};

    int n = 2;

    // Convert array to linked list
    ListNode *head = arrayToLL(arr);

    cout << "Original: ";
    printLL(head);

    // Remove nth node from end
    head = removeNthFromEnd(head, n);

    cout << "After removing " << n << "nd node from end: ";
    printLL(head);

    return 0;
}