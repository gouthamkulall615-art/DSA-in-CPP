#include <bits/stdc++.h>
using namespace std;
bool areIsomorphic(string s, string t)
{
    unordered_map<char, int> m1, m2;
    for (int i = 0; i < s.length(); i++)
    {
        if (m1.find(s[i]) == m1.end())
        {
            m1[s[i]] == i;
        }
        if (m2.find(t[i]) == m2.end())
        {
            m2[s[i] == i];
        }
        if (m1[s[i]] != m2[t[i]])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s = "aab";
    string t = "xxy";
    if (areIsomorphic(s, t))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}