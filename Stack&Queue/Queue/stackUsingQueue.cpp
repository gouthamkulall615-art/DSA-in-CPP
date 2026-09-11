#include <bits/stdc++.h>
using namespace std;

class Stack
{
    queue<int> q;

public:
    void push(int x)
    {
        q.push(x);

        int n = q.size();

        for (int i = 1; i < n; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }

    void pop()
    {
        if (q.empty())
        {
            cout << "Stack is empty" << endl;
            return;
        }

        cout << "Deleted: " << q.front() << endl;
        q.pop();
    }

    void display()
    {
        cout << "Stack: ";

        queue<int> temp = q;

        while (!temp.empty())
        {
            cout << temp.front() << " ";
            temp.pop();
        }

        cout << endl;
    }
};

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.pop();
    s.display();

    return 0;
}