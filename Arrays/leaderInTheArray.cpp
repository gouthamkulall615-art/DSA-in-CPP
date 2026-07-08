#include <bits/stdc++.h>
using namespace std;

vector<int> leaderInArray(vector<int> &a)
{
    vector<int> ans;
    int maxi = INT_MIN;
    int n = a.size();

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > maxi)
        {
            ans.push_back(a[i]);
        }
        maxi = max(maxi, a[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> arr = {10, 22, 12, 3, 0, 6};
    vector<int> result = leaderInArray(arr);
    cout << "the leaders in the given array is" << endl;
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}