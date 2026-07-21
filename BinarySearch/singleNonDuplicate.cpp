#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();

        int low = 0;
        int high = n - 1;

        while (low < high) {
            // Find the middle index
            int mid = low + (high - low) / 2;

            // Determine the index where the duplicate of mid should be
            int expected_partner;

            if (mid % 2 == 0) {
                // Even index -> partner should be on the right
                expected_partner = mid + 1;
            }
            else {
                // Odd index -> partner should be on the left
                expected_partner = mid - 1;
            }

            // Pair is correct, so single element is on the right side
            if (nums[mid] == nums[expected_partner]) {
                low = mid + 1;
            }
            // Pair is broken, so single element is on the left (including mid)
            else {
                high = mid;
            }
        }

        // low == high points to the single element
        return nums[low];
    }
};

int main() {
    // Input size of the array
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // Create the vector
    vector<int> nums(n);

    // Input array elements (must be sorted)
    cout << "Enter the sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Create object of Solution class
    Solution obj;

    // Find and print the single non-duplicate element
    int ans = obj.singleNonDuplicate(nums);

    cout << "Single non-duplicate element is: " << ans << endl;

    return 0;
}