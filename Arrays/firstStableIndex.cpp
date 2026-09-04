#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        for (int i = 0; i < n; ++i) {

            int maxValue = nums[i];
            int minValue = nums[i];

            // Find maximum value before i
            for (int j = 0; j < i; ++j) {
                maxValue = max(maxValue, nums[j]);
            }

            // Find minimum value after i
            for (int j = i + 1; j < n; ++j) {
                minValue = min(minValue, nums[j]);
            }

            // Check condition
            if (maxValue - minValue <= k) {
                return i;
            }
        }

        return -1;
    }
};

int main() {
    Solution obj;

    int n, k;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter k: ";
    cin >> k;

    int result = obj.firstStableIndex(nums, k);

    cout << "First stable index: " << result << endl;

    return 0;
}
