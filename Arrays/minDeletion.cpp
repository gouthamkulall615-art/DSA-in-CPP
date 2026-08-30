#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int minIndex = 0;
        int maxIndex = 0;

        // Find minimum and maximum indices
        for (int i = 0; i < n; i++) {
            if (nums[i] < nums[minIndex]) {
                minIndex = i;
            }

            if (nums[i] > nums[maxIndex]) {
                maxIndex = i;
            }
        }

        int l = min(minIndex, maxIndex);
        int r = max(minIndex, maxIndex);

        // Three possible ways
        int removeLeft = r + 1;
        int removeRight = n - l;
        int removeBoth = (l + 1) + (n - r);

        return min({removeLeft, removeRight, removeBoth});
    }
};

int main() {
    Solution obj;

    // vector<int> nums = {2, 10, 7, 5, 1, 8, 3};
    vector<int> nums = {101};

    int result = obj.minimumDeletions(nums);

    cout << "Minimum deletions: " << result << endl;

    return 0;
}