#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Function to find the maximum number of fruits
// that can be collected in two baskets.
int totalFruit(vector<int>& fruits)
{
    unordered_map<int, int> mp; // Stores fruit type -> frequency

    int low = 0;
    int ans = 0;

    // Expand the window
    for (int high = 0; high < fruits.size(); high++)
    {
        // Add current fruit
        mp[fruits[high]]++;

        cout << "\nAdded Fruit: " << fruits[high] << endl;

        // If more than 2 fruit types are present,
        // shrink the window from the left.
        while (mp.size() > 2)
        {
            cout << "Removing Fruit: " << fruits[low] << endl;

            mp[fruits[low]]--;

            if (mp[fruits[low]] == 0)
            {
                cout << "Fruit " << fruits[low] << " completely removed\n";
                mp.erase(fruits[low]);
            }

            low++;
        }

        // Current valid window length
        int windowLength = high - low + 1;
        ans = max(ans, windowLength);

        // Print current window
        cout << "Current Window: ";
        for (int i = low; i <= high; i++)
            cout << fruits[i] << " ";

        cout << endl;
        cout << "low = " << low
             << ", high = " << high
             << ", Window Length = " << windowLength
             << ", Best Answer = " << ans << endl;
    }

    return ans;
}

int main()
{
    int n;

    cout << "Enter number of trees: ";
    cin >> n;

    vector<int> fruits(n);

    cout << "Enter fruit types:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> fruits[i];
    }

    int ans = totalFruit(fruits);

    cout << "\nMaximum fruits collected = " << ans << endl;

    return 0;
}