#include <bits/stdc++.h>
using namespace std;

string removeOccurrences(string s, string part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main()
{

    string str = "daabcbaabcbc";
    string part = "abc";
    string result = removeOccurrences(str, part);
    cout << "the result is" << result;

    return 0;
}