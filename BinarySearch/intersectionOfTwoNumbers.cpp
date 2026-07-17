// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> nums1 = {4, 9, 5};
//     vector<int> nums2 = {9, 4, 9, 8, 4};

//     unordered_map<int, int> count;
//     vector<int> result;

//     // Store the frequency of elements in nums1
//     for (int num : nums1) {
//         count[num]++;
//     }

//     // Find the intersection
//     for (int num : nums2) {
//         if (count[num] > 0) {
//             result.push_back(num);
//             count[num]--;
//         }
//     }

//     // Print the result
//     cout << "Intersection: ";
//     for (int num : result) {
//         cout << num << " ";
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};

    // Sort both arrays
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    int i = 0, j = 0;
    vector<int> result;

    // Find intersection using two pointers
    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] < nums2[j]) {
            i++;
        }
        else if (nums1[i] > nums2[j]) {
            j++;
        }
        else {
            result.push_back(nums1[i]);
            i++;
            j++;
        }
    }

    // Print the intersection
    cout << "Intersection: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

    // Time Complexity:
    // Sorting nums1 = O(n log n)
    // Sorting nums2 = O(m log m)
    // Two-pointer traversal = O(n + m)
    // Overall TC = O(n log n + m log m)

    // Space Complexity:
    // Auxiliary Space = O(log n + log m) (due to std::sort recursion stack)
    // Extra variables (i, j) = O(1)
    // Result vector is not counted as extra space since it is the required output.
