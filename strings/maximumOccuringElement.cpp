#include <bits/stdc++.h>
using namespace std;

char maxOccEle(string s)
{

    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        int n = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            n = ch - 'a';
        }
        else
        {
            n = ch - 'A';
        }

        arr[n]++;
    }

    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    return ans+'a';
}

int main()

{

    string str = "pippete";
    char result = maxOccEle(str);

    cout << result;

    return 0;
}