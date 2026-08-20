#include <iostream>
#include <vector>
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
    if (arr.empty())
        return nullptr;

    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (size_t i = 1; i < arr.size(); i++)
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

Node *findMiddleBrute(Node *head)
{
    Node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    int mid = count / 2;
    temp = head;
    while (mid > 0)
    {
        temp = temp->next;
        mid--;
    }

    return temp;
}

Node *findMiddleOptimal(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    Node *head = convertArrToLL(arr);

    cout << "Original List: ";
    print(head);

    Node *midBrute = findMiddleBrute(head);
    if (midBrute != NULL)
    {
        cout << "Middle (Brute Force): " << midBrute->data << endl;
    }

    Node *midOptimal = findMiddleOptimal(head);
    if (midOptimal != NULL)
    {
        cout << "Middle (Optimal): " << midOptimal->data << endl;
    }

    return 0;
}