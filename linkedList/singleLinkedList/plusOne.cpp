#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int x)
    {
        val = x;
        next = NULL;
    }
};

Node *arrayToLL(vector<int> &arr)
{
    if (arr.empty())
        return NULL;

    Node *head = new Node(arr[0]);
    Node *temp = head;

    for (int i = 1; i < arr.size(); i++)
    {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }

    return head;
}

void printLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " -> ";
        head = head->next;
    }

    cout << "NULL" << endl;
}

Node *addOne(Node *head)
{
    Node *dummy = new Node(0);
    dummy->next = head;
    Node *last_non_nine = dummy;
    Node *temp = head;

    while (temp != nullptr)
    {
        if (temp->val != 9)
        {
            last_non_nine = temp;
        }
        temp = temp->next;
    }

    last_non_nine->val += 1;
    temp = last_non_nine->next;

    while (temp != nullptr)
    {
        temp->val = 0;
        temp = temp->next;
    }

    if (dummy->val == 1)
    {
        return dummy;
    }

    Node *result = dummy->next;
    delete dummy;
    return result;
}

int main()
{
    vector<int> arr1 = {1, 2, 9};
    Node *head1 = arrayToLL(arr1);
    cout << "Original List: ";
    printLL(head1);
    head1 = addOne(head1);
    cout << "After adding 1: ";
    printLL(head1);

    cout << "\n";

    vector<int> arr2 = {9, 9, 9};
    Node *head2 = arrayToLL(arr2);
    cout << "Original List: ";
    printLL(head2);
    head2 = addOne(head2);
    cout << "After adding 1: ";
    printLL(head2);

    return 0;
}