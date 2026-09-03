#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        
        // Store the smallest odd number in the array
        int smallestOdd = INT_MAX;

        // Find the smallest odd number
        for (int num : nums1) {
            if (num % 2 == 1) {
                smallestOdd = min(smallestOdd, num);
            }
        }

        // If there is no odd number, all elements are even,
        // so the array is already uniform
        if (smallestOdd == INT_MAX)
            return true;

        // Check every even number
        for (int num : nums1) {
            // If an even number is smaller than or equal to
            // the smallest odd number, the array cannot be uniform
            if (num % 2 == 0 && num <= smallestOdd)
                return false;
        }

        // Otherwise, the array can be made uniform
        return true;
    }
};

int main() {
    int n;

    // Read the size of the array
    cin >> n;

    vector<int> nums1(n);

    // Read array elements
    for (int i = 0; i < n; i++) {
        cin >> nums1[i];
    }

    // Create Solution object
    Solution obj;

    // Call the function and print the result
    cout << (obj.uniformArray(nums1) ? "true" : "false") << endl;

    return 0;
}