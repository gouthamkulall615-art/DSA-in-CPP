#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int candidate = nums[0];
    int count = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            candidate = nums[i];
            count = 1;
        }
    }
    return candidate;
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 2};
    int result = majorityElement(nums);
    cout << "the majority element in the given vector is " << result;
    return 0;
}