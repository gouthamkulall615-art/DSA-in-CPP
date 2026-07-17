#include <bits/stdc++.h>
using namespace std;

bool palindrome(string str, int n, int i)
{

    if (i >= n / 2)
    {
        return true;
    }
    if (str[i] != str[n - i - 1])
    {
        return false;
    }

    return palindrome(str, n, i + 1);
}

int main()
{
    string s = "MADAM";
    int n = s.length();
    cout << palindrome(s, n, 0);

    return 0;
}