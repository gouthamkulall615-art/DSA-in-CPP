#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node* convertArrToLL(vector<int>& arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

int main()
{
    vector<int> arr = {2, 5, 8, 7};
    // Node *y = new Node(arr[0]);
    // cout << y->data;

    Node* head =convertArrToLL(arr);
    cout<<head->data;

    return 0;
}

/*


Stack                          Heap

+--------+                  Address 1000
| y      |                  +------------------+
| 1000 --|----------------->| data = 2         |
+--------+                  | next = nullptr   |
                            +------------------+

y stores only the address.

y->data

↓

Go to address 1000

↓

Read data

↓

2

*/