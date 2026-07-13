#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> triplet(int n, vector<int> &num)
{

    vector<vector<int>> ans;
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (num[i] + num[j] + num[k] == 0)
                {
                    vector<int> temp = {num[i], num[j], num[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    for (auto it : st)
    {
        ans.push_back(it);
    }
    return ans;
}

int main()
{

    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    int n = arr.size();
    vector<vector<int>> res = triplet(n, arr);

    for (auto vec : res)
    {
        for (int x : vec)
        {
            cout << x << " ";
        }
    }

    return 0;
}