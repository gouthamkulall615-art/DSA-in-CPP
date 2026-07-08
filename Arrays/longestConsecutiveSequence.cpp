// #include <bits/stdc++.h>
// using namespace std;

// int longestConsecutiveSequence(vector<int> &nums)
// {
//     sort(nums.begin(), nums.end());
//     int longest = 1;
//     int currCount = 0;
//     int lastSmallest = INT_MIN;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] - 1 == lastSmallest)
//         {
//             currCount++;
//             lastSmallest = nums[i];
//         }
//         else if (nums[i] != lastSmallest)
//         {
//             currCount = 1;
//             lastSmallest = nums[i];
//         }
//         longest = max(longest, currCount);
//     }
//     return longest;
// }

// int main()
// {
//     vector<int> arr = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
//     int result = longestConsecutiveSequence(arr);
//     cout << "the longest Consecutive Sequence"  << result;

//     return 0;
// }



//optimal

#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {

    int longest = 1;
    int n = nums.size();
    if (n == 0) return 0;

    unordered_set<int> st;
    for (int i = 0; i < n; i++) {
        st.insert(nums[i]);
    }

    for (auto it : st) {
        if (st.find(it - 1) == st.end()) {
            int cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end()) {
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }

    return longest;
}

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};

    int result = longestConsecutive(nums);

    cout << "The longest consecutive sequence length is: " << result << endl;

    return 0;
}