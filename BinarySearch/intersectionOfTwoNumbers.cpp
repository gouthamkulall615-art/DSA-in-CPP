#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};

    unordered_map<int, int> count;
    vector<int> result;

    // Store the frequency of elements in nums1
    for (int num : nums1) {
        count[num]++;
    }

    // Find the intersection
    for (int num : nums2) {
        if (count[num] > 0) {
            result.push_back(num);
            count[num]--;
        }
    }

    // Print the result
    cout << "Intersection: ";
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}