#include <iostream>
#include <vector>
using namespace std;

// Node structure
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// Convert array/vector to linked list
Node *convertArr2LL(vector<int> &arr)
{

    if (arr.size() == 0)
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

// Remove all nodes whose value == val
Node *removeElements(Node *head, int val)
{

    // Dummy node
    Node dummy(0);
    dummy.next = head;

    Node *prev = &dummy;
    Node *temp = head;

    while (temp != NULL)
    {

        if (temp->data == val)
        {

            // Delete/skip current node
            prev->next = temp->next;
            temp = temp->next;
        }
        else
        {

            // Move both pointers
            prev = temp;
            temp = temp->next;
        }
    }

    return dummy.next;
}

// Print linked list
void printLL(Node *head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{

    vector<int> arr = {1, 2, 6, 3, 6, 4, 6};

    int val = 6;

    Node *head = convertArr2LL(arr);

    cout << "Before deletion: ";
    printLL(head);

    head = removeElements(head, val);

    cout << "After deletion: ";
    printLL(head);

    return 0;
}