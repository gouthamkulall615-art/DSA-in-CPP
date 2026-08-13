#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x)
    {
        val = x;
        next = nullptr;
    }
};

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{

    ListNode *dummyHead = new ListNode(-1);
    ListNode *curr = dummyHead;

    ListNode *temp1 = l1;
    ListNode *temp2 = l2;

    int carry = 0;

    while (temp1 != nullptr || temp2 != nullptr)
    {

        int sum = carry;

        if (temp1)
            sum += temp1->val;

        if (temp2)
            sum += temp2->val;

        ListNode *newNode = new ListNode(sum % 10);

        carry = sum / 10;

        curr->next = newNode;
        curr = curr->next;

        if (temp1)
            temp1 = temp1->next;

        if (temp2)
            temp2 = temp2->next;
    }

    if (carry)
    {
        curr->next = new ListNode(carry);
    }

    return dummyHead->next;
}

void print(ListNode *head)
{
    while (head)
    {
        cout << head->val;
        if (head->next)
            cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main()
{

    // 342
    ListNode *l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    // 465
    ListNode *l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    ListNode *ans = addTwoNumbers(l1, l2);

    print(ans);
}