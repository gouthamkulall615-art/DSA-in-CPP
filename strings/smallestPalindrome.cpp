#include <bits/stdc++.h>
using namespace std;

string smallestPalindrome(string s)
{
    int len = s.length();
    int mid = len / 2;

    sort(s.begin(), s.begin() + mid);

    for (int i = 0; i < mid; i++)
    {
        s[len - 1 - i] = s[i];
    }
    return s;
}

int main()
{
    string s = "babab";
    string res = smallestPalindrome(s);
    cout << "the smallest palindrome is " << res;
    return 0;
}
/*
Time complexity =O(nlog n)
Space complexity =O(1)

*/