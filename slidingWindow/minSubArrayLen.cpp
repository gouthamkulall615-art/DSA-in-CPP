#include <bits/stdc++.h>
using namespace std;

int minSubArrayLen(int target, vector<int> &nums)
{
    int n = nums.size();
    int left = 0;
    int sum = 0;
    int minLen = INT_MAX;

    for (int right = 0; right < n; ++right)
    {
        sum += nums[right];

        // shrink window while valid
        while (sum >= target)
        {
            minLen = min(minLen, right - left + 1);
            sum -= nums[left];
            ++left;
        }
    }

    return (minLen == INT_MAX) ? 0 : minLen;
}

int main()
{
    vector<int> arr = {1, 2, 4, 4};
    int res = minSubArrayLen(4, arr);
    cout << res;

    return 0;
}