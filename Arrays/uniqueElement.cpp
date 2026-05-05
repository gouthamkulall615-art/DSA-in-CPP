#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        ans = ans ^ nums[i];
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 3, 5, 4, 5, 3, 4};

    int result = singleNumber(nums);

    cout << "Unique element: " << result << endl;

    return 0;
}