#include <bits/stdc++.h>
using namespace std;

// smallest index such that arr[index]>=x 

int lowerBound(vector<int> &arr, int n, int x)
{
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 7, 8, 9, 9, 9, 11};
    int n = arr.size();
    int result = lowerBound(arr, n, 1);
    cout << "the lower bound position for the given x is:" << result << endl;

    return 0;
}