#include <bits/stdc++.h>
using namespace std;

int longestSequence(vector<int> &nums)
{
    int n = nums.size();
    int xr = 0;
    bool hasNonZero = false;

    for (int x : nums)
    {
        xr ^= x;

        if (x != 0)
        {
            hasNonZero = true;
        }
    }
    if (xr != 0)
    {
        return n;
    }
    if (hasNonZero)
    {
        return n - 1;
    }
    return 0;
}

int main()
{
    vector<int> arr = {1, 2, 3};
    int res = longestSequence(arr);
    cout << "the longest sub sequence where xor is not equal to zero is=" << res;

    return 0;
}