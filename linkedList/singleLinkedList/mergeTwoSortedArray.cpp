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
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *mergeTwoLists(Node *l1, Node *l2)
{
    if (l1 == NULL)
    {
        return l2;
    }
    if (l2 == NULL)
    {
        return l1;
    }
    if (l1->data <= l2->data)
    {
        l1->next = mergeTwoLists(l1->next, l2);
        return l1;
    }
    else
    {
        l2->next = mergeTwoLists(l2->next, l1);
        return l2;
    }
}

int main()
{
    vector<int> arr1 = {1, 3, 5};
    vector<int> arr2 = {2, 4, 6};
    Node *head1 = convertArrToLL(arr1);
    Node *head2 = convertArrToLL(arr2);
    Node *mergeHead = mergeTwoLists(head1, head2);
    print(mergeHead);

    return 0;
}
