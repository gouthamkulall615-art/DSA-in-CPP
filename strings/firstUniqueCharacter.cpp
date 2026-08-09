#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int firstUniqChar(string s)
{
    unordered_map<char, int> mp;

    // Count frequency
    for (char c : s)
    {
        mp[c]++;
    }

    // Find first character with frequency 1
    for (int i = 0; i < s.length(); i++)
    {
        if (mp[s[i]] == 1)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    string s;

    cout << "Enter string: ";
    cin >> s;

    int result = firstUniqChar(s);

    cout << "First unique character index: " << result << endl;

    return 0;
}