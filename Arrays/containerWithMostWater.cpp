#include <bits/stdc++.h>
using namespace std;

int containerWithMostWater(vector<int> &nums)
{
    int maxWater = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int width = j - i;
            int height = min(nums[i], nums[j]);

            int area = width * height;
            maxWater = max(maxWater, area);
        }
    }
    return maxWater;
}
int main()
{

    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int result = containerWithMostWater(height);

    cout << " the answer is " << result;
    return 0;
}