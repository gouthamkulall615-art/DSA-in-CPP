#include <bits/stdc++.h>
using namespace std;

void nextPermutaion(vector<int> &nums)
{
    int index = -1;
    int n = nums.size();
    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        reverse(nums.begin(), nums.end());
    }
    for (int i = n - 1; i >= index; i--)
    {
        if (nums[i] > nums[index])
        {
            swap(nums[i], nums[index]);
            break;
        }
    }

    reverse(nums.begin() + index + 1, nums.begin() + n);
}

int main()
{

    vector<int> arr = {2, 1, 5, 4, 3, 0, 0};
    nextPermutaion(arr);
    cout << "the next permutaion of the given array is" <<endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}