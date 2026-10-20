#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ans(numRows);

        for (int i = 0; i < numRows; i++)
        {
            ans[i].resize(i + 1, 1);

            for (int j = 1; j < i; j++)
            {
                ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
            }
        }

        return ans;
    }
};

int main()
{
    int n;
    cin >> n;

    Solution s;
    vector<vector<int>> ans = s.generate(n);

    for (auto row : ans)
    {
        for (auto x : row)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}