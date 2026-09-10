#include <bits/stdc++.h>
using namespace std;
#define MAX 10
int stackArr[MAX];
int top = -1;

void push(int val)
{
    if (top == MAX - 1)
    {
        cout << "the stack is full\n";
        return;
    }
    else
    {
        top++;
        stackArr[top] = val;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "the stack is empty\n";
        return;
    }
    else
    {
        cout << "the removed element is :" << stackArr[top];
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        cout << "the stack is empty\n";
        return;
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            cout << stackArr[i] << " ";
        }
    }
}

int main()
{
    push(100);
    push(200);
    push(300);
    pop();
    display();

    return 0;
}

// time complexity of O(1);
// space complexity of o(10);