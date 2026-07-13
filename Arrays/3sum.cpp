// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> triplet(int n, vector<int> &num)
// {

//     vector<vector<int>> ans;
//     set<vector<int>> st;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             for (int k = j + 1; k < n; k++)
//             {
//                 if (num[i] + num[j] + num[k] == 0)
//                 {
//                     vector<int> temp = {num[i], num[j], num[k]};
//                     sort(temp.begin(), temp.end());
//                     st.insert(temp);
//                 }
//             }
//         }
//     }
//     for (auto it : st)
//     {
//         ans.push_back(it);
//     }
//     return ans;
// }

// int main()
// {

//     vector<int> arr = {-1, 0, 1, 2, -1, -4};
//     int n = arr.size();
//     vector<vector<int>> res = triplet(n, arr);

//     for (auto vec : res)
//     {
//         for (int x : vec)
//         {
//             cout << x << " ";
//         }
//     }

//     return 0;
// }

// better version using the hashmap

// #include <bits/stdc++.h>
// using namespace std;
// vector<vector<int>> triplet(int n, vector<int> &num)
// {

//     set<vector<int>> st;
//     for (int i = 0; i < n; i++)
//     {
//         set<int> hashset;
//         for (int j = i + 1; j < n; j++)
//         {
//             int third = -(num[i] + num[j]);
//             if (hashset.find(third) != hashset.end())
//             {
//                 vector<int> temp = {num[i], num[j], third};
//                 sort(temp.begin(), temp.end());
//                 st.insert(temp);
//             }

//             hashset.insert(num[j]);
//         }
//     }
//     vector<vector<int>> ans(st.begin(), st.end());
//     return ans;
// }

// int main()
// {
//     vector<int> arr = {-1, 0, 1, 2, -1, -4};
//     int n = arr.size();
//     vector<vector<int>> res = triplet(n, arr);

//     for (auto vec : res)
//     {
//         for (int x : vec)
//         {
//             cout << x << " ";
//         }
//     }

//     return 0;
// }



//optimal solution

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            // Skip duplicate first elements
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if (sum < 0) {
                    j++;
                } else if (sum > 0) {
                    k--;
                } else {
                    ans.push_back({nums[i], nums[j], nums[k]});

                    j++;
                    k--;

                    // Skip duplicate second elements
                    while (j < k && nums[j] == nums[j - 1])
                        j++;

                    // Skip duplicate third elements
                    while (j < k && nums[k] == nums[k + 1])
                        k--;
                }
            }
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    Solution obj;
    vector<vector<int>> result = obj.threeSum(nums);

    cout << "Triplets are:\n";
    for (auto &triplet : result) {
        cout << "[ ";
        for (int x : triplet) {
            cout << x << " ";
        }
        cout << "]\n";
    }

    return 0;
}
