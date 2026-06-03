#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 2, 4};

    int val = 2;

    // nums.erase(remove(nums.begin(), nums.end(), val), nums.end());

    // for (int x : nums) {
    //     cout << x << " ";
    // }

    int k = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            nums[k] = nums[i];
            k++;
        }
    }

    for (int i = 0; i < k; i++)
    {
        cout << nums[i];
    }

    return 0;
}