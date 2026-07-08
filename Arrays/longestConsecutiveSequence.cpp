#include <bits/stdc++.h>
using namespace std;

int longestConsecutiveSequence(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int longest = 1;
    int currCount = 0;
    int lastSmallest = INT_MIN;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] - 1 == lastSmallest)
        {
            currCount++;
            lastSmallest = nums[i];
        }
        else if (nums[i] != lastSmallest)
        {
            currCount = 1;
            lastSmallest = nums[i];
        }
        longest = max(longest, currCount);
    }
    return longest;
}

int main()
{
    vector<int> arr = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    int result = longestConsecutiveSequence(arr);
    cout << "the longest Consecutive Sequence"  << result;

    return 0;
}