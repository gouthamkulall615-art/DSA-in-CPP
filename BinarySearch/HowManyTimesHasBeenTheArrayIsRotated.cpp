#include <bits/stdc++.h>
using namespace std;

int findRotation(vector<int> &nums)
{
    int n = nums.size();

    int low = 0;
    int high = n - 1;

    int ans = INT_MAX;
    int index = -1;

    while (low <= high)
    {

        // If the current search space is already sorted
        if (nums[low] <= nums[high])
        {
            if (nums[low] < ans)
            {
                index = low;
                ans = nums[low];
            }
            break;
        }

        int mid = low + (high - low) / 2;

        // Left half is sorted
        if (nums[low] <= nums[mid])
        {
            if (nums[low] < ans)
            {
                index = low;
                ans = nums[low];
            }
            low = mid + 1;
        }
        // Right half is sorted
        else
        {
            if (nums[low] < ans)
            {
                index = mid;
                ans = nums[mid];
            }
            high = mid - 1;
        }
    }

    return index;
}

int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};

    cout << "Number of the rotation : " << findRotation(nums) << endl;

    return 0;
}