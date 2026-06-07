#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {8, 7, 6, 8, 5};
    int secondLargest = 0;

    sort(nums.begin(), nums.end());
    int largest = nums.back();

    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (nums[i] != largest)
        {
            secondLargest = nums[i];
            break;
        }
    }
    cout << "the second largest" << secondLargest;

    return 0;
}