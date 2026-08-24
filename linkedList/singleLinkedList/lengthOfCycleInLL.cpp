#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *convertArrToLL(vector<int> &arr)
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
int findLength(Node *slow, Node *fast)
{
    int cnt = 0;
    fast = fast->next;
    while (slow != fast)
    {
        cnt++;
        fast = fast->next;
    }
    return cnt;
}

int loopLength(Node *head)
{
    // Write your code here
    Node *fast = head;
    Node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return findLength(slow, fast);
    }
    return 0;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    Node *head = convertArrToLL(arr);

    Node *temp = head;
    Node *cycleNode = head->next->next;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = cycleNode;

    cout << "Length of loop: " << loopLength(head) << endl;

    return 0;
}