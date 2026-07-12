#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> temp = arr;
    sort(temp.begin(), temp.end());

    unordered_map<int, int> rank;
    int r = 1;

    for (int x : temp)
    {
        if (rank.find(x) == rank.end())
        {
            rank[x] = r++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = rank[arr[i]];
    }

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}