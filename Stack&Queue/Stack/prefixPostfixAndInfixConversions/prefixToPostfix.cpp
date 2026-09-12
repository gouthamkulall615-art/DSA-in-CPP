#include <bits/stdc++.h>
using namespace std;

int main()
{
    string prefix, a, b;
    stack<string> s;

    cout << "enter the prefix expression";
    cin >> prefix;

    reverse(prefix.begin(), prefix.end());

    for (char c : prefix)
    {
        if (isalnum(c))
        {
            s.push(string(1, c));
        }
        else
        {
            a = s.top();
            s.pop();
            b = s.top();
            s.pop();

            s.push(a + b + string(1, c));
        }
    }
    cout << "Postfix expression " << s.top();

    return 0;
}