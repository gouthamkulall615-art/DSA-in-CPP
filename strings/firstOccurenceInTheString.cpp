#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle)
{
    int n = needle.size();
    int m = haystack.size();

    for (int s = 0; s <= m - n; s++)
    {
        int i;

        for (i = 0; i < n; i++)
        {
            if (haystack[s + i] != needle[i])
            {
                break;
            }
        }

        if (i == n)
        {
            return s;
        }
    }

    return -1;
}

int main()
{
    string haystack, needle;

    cout << "Enter haystack: ";
    cin >> haystack;

    cout << "Enter needle: ";
    cin >> needle;

    int index = strStr(haystack, needle);

    cout << "Index: " << index << endl;

    return 0;
}