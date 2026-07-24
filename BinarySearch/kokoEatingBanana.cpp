#include <bits/stdc++.h>
using namespace std;

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

long long calculateTotalHours(vector<int> &v, int hourly)
{
    long long totalHr = 0;
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        totalHr += ceil((double)v[i] / (double)hourly);
    }

    return totalHr;
}

int minEatingSpeed(vector<int> &piles, int h)
{
    int low = 1;
    int high = findMax(piles);

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        long long totalHr = calculateTotalHours(piles, mid);

        if (totalHr <= h)
        {
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

    vector<int> arr = {3, 6, 7, 11};
    int h = 8;
    int result = minEatingSpeed(arr, h);
    cout << "the result is " << result;

    return 0;
}