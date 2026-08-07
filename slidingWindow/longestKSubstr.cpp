#include <iostream>
#include <unordered_map>
#include <string>
#include <climits>
using namespace std;

// Function to find the length of the longest substring
// containing exactly k distinct characters.
int longestKSubstr(string s, int k)
{
    unordered_map<char, int> mp; // Stores frequency of characters

    int low = 0;  // Left end of window
    int res = -1; // Stores maximum length found

    // Expand the window by moving 'high'
    for (int high = 0; high < s.length(); high++)
    {
        // Add current character into the window
        mp[s[high]]++;

        cout << "\nAdded '" << s[high] << "'\n";

        // If window has more than k distinct characters,
        // shrink it from the left.
        while (mp.size() > k)
        {
            cout << "Removing '" << s[low] << "' from window\n";

            // Reduce frequency
            mp[s[low]]--;

            // If frequency becomes 0, erase it from map
            if (mp[s[low]] == 0)
            {
                cout << "'" << s[low] << "' completely removed\n";
                mp.erase(s[low]);
            }

            // Move left pointer
            low++;
        }

        // If window has exactly k distinct characters,
        // calculate its length.
        if (mp.size() == k)
        {
            int len = high - low + 1;
            res = max(res, len);
        }

        // Print current window
        cout << "Current Window : ";
        for (int i = low; i <= high; i++)
            cout << s[i];

        cout << "\nlow = " << low
             << ", high = " << high
             << ", Window Length = " << high - low + 1
             << ", Best Answer = " << res << endl;
    }

    return res;
}

int main()
{
    string s;
    int k;

    cout << "Enter string: ";
    cin >> s;

    cout << "Enter k: ";
    cin >> k;

    int ans = longestKSubstr(s, k);

    cout << "\nLongest Substring with Exactly "
         << k << " Distinct Characters = "
         << ans << endl;

    return 0;
}