#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    bool possible(vector<int>& v, int day, int m, int k) {
        int count = 0;
        int noOfBoq = 0;
        int n = v.size();

        for (int i = 0; i < n; i++) {
            if (v[i] <= day) {
                count++;
            } else {
                noOfBoq += count / k;
                count = 0;
            }
        }

        noOfBoq += count / k;

        return noOfBoq >= m;
    }

    int findMax(vector<int>& v) {
        int maxi = INT_MIN;
        int n = v.size();

        for (int i = 0; i < n; i++) {
            maxi = max(maxi, v[i]);
        }

        return maxi;
    }

    int findMin(vector<int>& v) {
        int mini = INT_MAX;
        int n = v.size();

        for (int i = 0; i < n; i++) {
            mini = min(mini, v[i]);
        }

        return mini;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();

        if ((long long)m * k > n)
            return -1;

        int low = findMin(bloomDay);
        int high = findMax(bloomDay);

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (possible(bloomDay, mid, m, k)) {
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

    vector<int> bloomDay = {1, 10, 3, 10, 2};
    int m = 3;
    int k = 1;

    int ans = obj.minDays(bloomDay, m, k);

    cout << "Minimum days required = " << ans << endl;

    return 0;
}