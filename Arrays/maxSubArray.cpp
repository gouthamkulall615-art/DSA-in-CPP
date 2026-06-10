#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int> &nums)
{
    int sum = 0;
    int maxi = INT_MIN;
    int start = 0;
    int ansStart = 0;
    int ansEnd = 0;

    for (int i = 0; i < nums.size(); i++)
    {

        if (sum == 0)
        {
            start = i;
        }

        sum += nums[i];
        if (sum > maxi)
        {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }

        if (sum < 0)
        {
            sum = 0;
        }
    }

    cout << "the subarray is" << endl;
    for (int i = ansStart; i <= ansEnd; i++)
    {
        cout << nums[i] << " ";
    }
    return maxi;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result = maxSubArray(nums);
    cout << "the sum of the maximum sub array is" << result;

    return 0;
}