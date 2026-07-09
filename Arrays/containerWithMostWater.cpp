// #include <bits/stdc++.h>
// using namespace std;

// int containerWithMostWater(vector<int> &nums)
// {
//     int maxWater = 0;
//     int n = nums.size();

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             int width = j - i;
//             int height = min(nums[i], nums[j]);

//             int area = width * height;
//             maxWater = max(maxWater, area);
//         }
//     }
//     return maxWater;
// }
// int main()
// {

//     vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

//     int result = containerWithMostWater(height);

//     cout << " the answer is " << result;
//     return 0;
// }

// optimal solution

#include <bits/stdc++.h>
using namespace std;

int containerWithMostWater(vector<int> &nums)
{
    int maxWater = 0;
    int n = nums.size();

    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        int width = right - left;
        int height = min(nums[left], nums[right]);

        int area = width * height;
        maxWater = max(maxWater, area);

        nums[left] < nums[right] ? left++ : right--;
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