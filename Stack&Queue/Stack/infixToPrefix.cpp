#include <bits/stdc++.h>
using namespace std;

int precedence(char c)
{
    if (c == '^')
        return 3;
    if (c == '*' || c == '/')
        return 2;
    if (c == '+' || c == '-')
        return 1;

    return 0;
}

int main()
{

    string infix, prefix = "", rev = "";
    stack<char> s;

    cout << "Enter infix expression to convert to prefix" << endl;
    cin >> infix;

    reverse(infix.begin(), infix.end());

    for (char c : infix)
    {
        if (c == ')')
        {
            rev += '(';
        }
        else if (c == '(')
        {
            rev += ')';
        }
        else
        {
            rev += c;
        }
    }

    for (char c : rev)
    {
        if (isalnum(c))
        {
            prefix += c;
        }
        else if (c == '(')
        {
            s.push(c);
        }
        else if (c == ')')
        {
            while (!s.empty() && s.top() != '(')
            {
                prefix += s.top();
                s.pop();
            }
            s.pop();
        }
        else
        {
            while (!s.empty() && precedence(s.top()) > precedence(c))
            {
                prefix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }
    while (!s.empty())
    {
        prefix += s.top();
        s.pop();
    }

    reverse(prefix.begin(), prefix.end());
    cout << "prefix expression " << prefix;

    return 0;
}