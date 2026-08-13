#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node *convertArr2DLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
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
}

Node *insertBeforeHead(Node *head, int val)
{
    Node *newHead = new Node(val, head, nullptr);
    head->back = newHead;
    return newHead;
}

Node *insertBeforeTail(Node *head, int val)
{
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *prev = tail->back;
    Node *newNode = new Node(val, tail, prev);
    prev->next = newNode;
    tail->back = newNode;

    return head;
}
int main()
{

    vector<int> arr = {12, 5, 6, 7};
    Node *head = convertArr2DLL(arr);
    // head = insertBeforeHead(head, 10);
    head = insertBeforeTail(head, 10);
    print(head);

    return 0;
}