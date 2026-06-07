#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int j = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[j])
        {
            j++;
            nums[j] = nums[i];
        }
    }
    return j + 1;
}

int main()
{
    vector<int> nums = {1, 1, 2, 2, 3};

    int k = removeDuplicates(nums);
    cout << "the no of elements after the removal of duplicate elements is" << k;

    return 0;
}