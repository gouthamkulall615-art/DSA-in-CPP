#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    unordered_map<char, int> mp;

    int low = 0;
    int ans = 0;

    for (int high = 0; high < s.length(); high++)
    {
        // Add current character
        mp[s[high]]++;

        cout << "\nAdded: " << s[high] << endl;

        // Window size
        int windowSize = high - low + 1;

        // If duplicate exists, shrink window
        while (mp.size() < windowSize)
        {
            cout << "Removing: " << s[low] << endl;

            mp[s[low]]--;

            if (mp[s[low]] == 0)
            {
                cout << "'" << s[low] << "' completely removed\n";
                mp.erase(s[low]);
            }

            low++;

            // Recalculate window size
            windowSize = high - low + 1;
        }

        // Update answer
        ans = max(ans, high - low + 1);

        // Print current window
        cout << "Current Window: ";

        for (int i = low; i <= high; i++)
            cout << s[i];

        cout << endl;

        cout << "low = " << low
             << " high = " << high
             << " length = " << high - low + 1
             << " ans = " << ans << endl;
    }

    return ans;
}

int main()
{
    string s;

    cout << "Enter string: ";
    cin >> s;

    cout << "\nAnswer = " << lengthOfLongestSubstring(s);

    return 0;
}