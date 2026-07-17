#include <bits/stdc++.h>
using namespace std;

vector<int> reverseArray(vector<int> nums, int l, int r)
{
    if (l >= r)
    {
        return nums;
    }
    else

    {
        swap(nums[l], nums[r]);
        return reverseArray(nums, l + 1, r - 1);
    }
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    vector<int> result = reverseArray(arr, 0, n - 1);
    for (auto i : result)
    {
        cout << i << " ";
    }

    return 0;
}