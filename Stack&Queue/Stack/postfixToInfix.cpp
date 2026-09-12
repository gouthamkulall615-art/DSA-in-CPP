#include <bits/stdc++.h>
using namespace std;

int main()
{

    string postfix, a, b;
    stack<string> s;
    cout << "Enter postfix expression ";
    cin >> postfix;

    for (char c : postfix)
    {
        if (isalnum(c))
        {
            s.push(string(1, c));
        }
        else
        {
            b = s.top();
            s.pop();
            a = s.top();
            s.pop();
            s.push("(" + a + c + b + ")");
        }
    }
    cout << "infix expression " << s.top();
    return 0;
}

//TC->O(n)+O(n1+n2)//adding of two string 
//sc->O(n)