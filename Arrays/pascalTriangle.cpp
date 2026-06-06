#include <bits/stdc++.h>
using namespace std;

int main()
{

    int numRow = 4;
    vector<vector<int>> result;

    vector<int> firstRow = {1};
    result.push_back(firstRow);
    for (int i = 0; i < numRow - 1; i++)
    {

        vector<int> prev = result.back();
        vector<int> newRow = {1};
        for (int j = 0; j < prev.size() - 1; j++)
        {
            newRow.push_back(prev[j] + prev[j + 1]);
        }
        newRow.push_back(1);
        result.push_back(newRow);
    }

    cout << "the pascall triangle is "<<endl;
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j];
        }
        cout << endl;
    }

    return 0;
}