#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cout << "enter a value:" << endl;
    cin >> a;
    cout << "enter b value:" << endl;
    cin >> b;
    char op;
    cout << "enter the operation to be performed to the variables" << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a + b;
        break;

    case '-':
        cout << a - b;
        break;

    case '*':
        cout << a * b;
        break;

    case '/':
        cout << a / b;
        break;

    default:
        cout << "chose right operator " << endl;
    }

    return 0;
}