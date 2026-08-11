/*
[0,0,0,1,1]
[0,0,1,1,1]
[0,1,1,1,1]

*/

#include <bits/stdc++.h>
using namespace std;

vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
{
    int maxOnes = 0;
    int rowIndex = 0;

    for (int i = 0; i < mat.size(); i++)
    {
        int left = 0;
        int right = mat[i].size() - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (mat[i][mid] == 1)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        int ones = mat[i].size() - left;

        if (ones > maxOnes)
        {
            maxOnes = ones;
            rowIndex = i;
        }
    }
    return {rowIndex, maxOnes};
}

int main()
{

    vector<vector<int>> arr = {{0, 0, 0, 1, 1},
                               {0, 0, 1, 1, 1},
                               {0, 1, 1, 1, 1}};

    vector<int> res = rowAndMaximumOnes(arr);

    cout << res[0] << " " << res[1];

    return 0;
}