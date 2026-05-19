#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &stalls, int m, int mid)
{
    int cowsPlaced = 1;
    int last = stalls[0];

    for (int i = 1; i < stalls.size(); i++)
    {
        if (stalls[i] - last >= mid)
        {
            cowsPlaced++;
            last = stalls[i];
        }
    }
    return cowsPlaced >= m;
}

int solve(vector<int> &stalls, int m)
{
    sort(stalls.begin(), stalls.end());
    int low = 1;
    int high = stalls[stalls.size() - 1] - stalls[0];
    int ans = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (isPossible(stalls, m, mid))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{

    vector<int> stalls = {1, 2, 4, 9};
    int m = 3;
    int result = solve(stalls, m);
    cout << "result is " << result;

    return 0;
}