#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> tokens(n);
    stack<int> s;

    for (int i = 0; i < n; i++)
        cin >> tokens[i];

    for (string x : tokens)
    {
        if (x == "+" || x == "-" || x == "*" || x == "/")
        {
            int b = s.top();
            s.pop();

            int a = s.top();
            s.pop();

            if (x == "+")
                s.push(a + b);
            else if (x == "-")
                s.push(a - b);
            else if (x == "*")
                s.push(a * b);
            else
                s.push(a / b);
        }
        else
        {
            s.push(stoi(x));
        }
    }

    cout << s.top();

    return 0;
}