#include <bits/stdc++.h>
using namespace std;

bool possible(vector<int> &v, int mid, int k)
{
    int sum = 0;
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        sum += (v[i] + mid - 1) / mid;
    }
    if (sum > k)
    {
        return false;
    }
    else
        return true;
}

int findMax(vector<int> &v)
{
    int maxi = INT_MIN;
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, v[i]);
    }

    return maxi;
}

int smallestDivisor(vector<int> &nums, int threshold)
{
    int n = nums.size();

    int low = 1;
    int high = findMax(nums);

    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (possible(nums, mid, threshold) == true)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}
int main()
{
    vector<int> arr = {1, 2, 5, 9};
    int result = smallestDivisor(arr, 5);
    cout << "result is:" << result;

    return 0;
}