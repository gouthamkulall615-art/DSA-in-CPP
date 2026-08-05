#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> &arr, int k)
{
    int n = arr.size();
    if (n < k)
        return 0;
    int windowSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < k; i++)
    {
        windowSum += arr[i];
    }
    maxSum = windowSum;

    for (int i = k; i < n; i++)
    {
        windowSum += arr[i] - arr[i - k];
        maxSum = max(maxSum, windowSum);
    }
    return maxSum;
}
int main()
{
    vector<int> arr = {100, 200, 300, 400};
    int res = maxSubarraySum(arr, 2);
    cout << res;

    return 0;
}