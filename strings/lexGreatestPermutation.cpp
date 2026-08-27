#include <bits/stdc++.h>
using namespace std;

string lexGreaterPermutation(string s, string target)
{
    int n = s.size();

    // Count the characters available in s
    vector<int> freq(26, 0);

    for (char c : s)
    {
        freq[c - 'a']++;
    }

    // Try to match target from left to right
    int i = 0;

    while (i < n && freq[target[i] - 'a'] > 0)
    {
        freq[target[i] - 'a']--;
        i++;
    }

    // Case 1:
    // We could not match target[i].
    // Try to put the smallest character greater than target[i].
    if (i < n)
    {

        for (int c = target[i] - 'a' + 1; c < 26; c++)
        {

            if (freq[c] > 0)
            {

                string ans = target.substr(0, i);

                // Put a character greater than target[i]
                ans += char('a' + c);
                freq[c]--;

                // Put all remaining characters in sorted order
                for (int j = 0; j < 26; j++)
                {
                    while (freq[j] > 0)
                    {
                        ans += char('a' + j);
                        freq[j]--;
                    }
                }

                return ans;
            }
        }
    }

    // Case 2:
    // We matched a prefix of target, but could not make
    // the answer greater at the current position.
    // Backtrack to an earlier position.
    for (int j = i - 1; j >= 0; j--)
    {

        // Return the character that we used while matching target
        freq[target[j] - 'a']++;

        // Try to replace target[j] with a slightly larger character
        for (int c = target[j] - 'a' + 1; c < 26; c++)
        {

            if (freq[c] > 0)
            {

                string ans = target.substr(0, j);

                // Make the string greater at position j
                ans += char('a' + c);
                freq[c]--;

                // Put remaining characters in smallest order
                for (int k = 0; k < 26; k++)
                {
                    while (freq[k] > 0)
                    {
                        ans += char('a' + k);
                        freq[k]--;
                    }
                }

                return ans;
            }
        }
    }

    // No permutation of s is greater than target
    return "";
}

int main()
{
    string s, target;

    cin >> s >> target;

    string result = lexGreaterPermutation(s, target);

    cout << result << endl;

    return 0;
}