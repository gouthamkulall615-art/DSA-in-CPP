#include <bits/stdc++.h>
using namespace std;

string shortestBeautifulSubstring(string s, int k)
{
    int left = 0;
    int ones = 0;
    string ans = "";

    for (int right = 0; right < s.length(); right++)
    {
        if (s[right] == '1')
            ones++;

        while (ones > k)
        {
            if (s[left] == '1')
                ones--;
            left++;
        }

        if (ones == k)
        {
            while (s[left] == '0')
                left++;

            string current = s.substr(left, right - left + 1);

            if (ans == "" ||
                current.length() < ans.length() ||
                (current.length() == ans.length() && current < ans))
            {
                ans = current;
            }
        }
    }

    return ans;
}

int main()
{
    string s;
    int k;

    cin >> s >> k;

    cout << shortestBeautifulSubstring(s, k) << endl;

    return 0;
}