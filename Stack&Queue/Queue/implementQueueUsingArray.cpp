#include <bits/stdc++.h>
using namespace std;
#define MAX 5
int queueArr[MAX];
int front = -1;
int rear = -1;

void enqueue(int val)
{
    if (rear == MAX - 1)
    {
        cout << "queue is full\n";
        return;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        queueArr[rear] = val;
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "queue is empty\n";
        return;
    }
    else
    {
        cout << "deleted " << queueArr[front] << endl;
        front++;
    }
}

void display()
{
    if (front == -1 || front > rear)
    {
        cout << "queue is empty\n";
        return;
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            cout << queueArr[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    cout << "Queue: ";
    display();

    dequeue();

    cout << "After dequeue: ";
    display();

    return 0;
}