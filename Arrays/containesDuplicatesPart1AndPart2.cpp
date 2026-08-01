// #include <iostream>
// #include <vector>
// #include <unordered_set>
// using namespace std;

// bool containsDuplicate(vector<int>& nums) {
//     unordered_set<int> s;

//     for (int num : nums) {
//         if (s.find(num) != s.end()) {
//             return true;
//         }
//         s.insert(num);
//     }

//     return false;
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<int> nums(n);

//     for (int i = 0; i < n; i++)
//         cin >> nums[i];

//     if (containsDuplicate(nums))
//         cout << "True";
//     else
//         cout << "False";

//     return 0;
// }

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {

    unordered_map<int, int> lastIndex;

    for (int i = 0; i < nums.size(); i++) {

        if (lastIndex.count(nums[i])) {

            int distance = i - lastIndex[nums[i]];

            if (distance <= k)
                return true;
        }

        lastIndex[nums[i]] = i;
    }

    return false;
}

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int k;
    cin >> k;

    if (containsNearbyDuplicate(nums, k))
        cout << "True";
    else
        cout << "False";

    return 0;
}