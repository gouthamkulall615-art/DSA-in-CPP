#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

// Convert array to Linked List
Node *convertArrToLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

// Print Linked List
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Odd Even Linked List
Node *oddEvenList(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *odd = head;
    Node *even = head->next;

    Node *evenHead = head->next;

    while (even != NULL && even->next != NULL)
    {
        odd->next = odd->next->next;
        even->next = even->next->next;

        odd = odd->next;
        even = even->next;
    }

    odd->next = evenHead;

    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    // Create Linked List
    Node *head = convertArrToLL(arr);

    cout << "Original Linked List: ";
    print(head);

    // Apply Odd Even
    head = oddEvenList(head);

    cout << "After Odd Even: ";
    print(head);

    return 0;
}