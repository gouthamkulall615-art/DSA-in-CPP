#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dayRequired(vector<int>& w, int capacity) {
        int day = 1, load = 0;
        int n = w.size();

        for (int i = 0; i < n; i++) {
            if (load + w[i] > capacity) {
                day++;
                load = w[i];
            } else {
                load += w[i];
            }
        }
        return day;
    }

    int findMax(vector<int>& w) {
        int n = w.size();
        int maxi = INT_MIN;

        for (int i = 0; i < n; i++) {
            maxi = max(maxi, w[i]);
        }
        return maxi;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();

        int low = findMax(weights);
        int high = 0;

        for (int i = 0; i < n; i++) {
            high += weights[i];
        }

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (dayRequired(weights, mid) <= days) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter number of packages: ";
    cin >> n;

    vector<int> weights(n);

    cout << "Enter package weights: ";
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }

    int days;
    cout << "Enter number of days: ";
    cin >> days;

    int ans = obj.shipWithinDays(weights, days);

    cout << "Minimum ship capacity required: " << ans << endl;

    return 0;
}