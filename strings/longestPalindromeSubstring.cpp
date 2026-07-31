#include <bits/stdc++.h>
using namespace std;

string longestPalindrome(string s)
{
    int maxLength = 1;
    int start = 0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        int left = i;
        int right = i;
        while (left >= 0 && right < n && s[left] == s[right])
        {
            left--;
            right++;
        }
        int length = right - left - 1;
        if (length > maxLength)
        {
            maxLength = length;
            start = left + 1;
        }

        left = i;
        right = i + 1;
        while (left >= 0 && right < n && s[left] == s[right])
        {
            left--;
            right++;
        }
        length = right - left - 1;
        if (length > maxLength)
        {
            maxLength = length;
            start = left + 1;
        }
    }
    return s.substr(start, maxLength);
}

int main()
{

    string s = "babad";
    string res = longestPalindrome(s);
    cout << res;

    return 0;
}