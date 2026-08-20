#include <bits/stdc++.h>
using namespace std;

/*
Input: nums = [2,1,3]
Output: [2,3,1]
Explanation: After the first 2 operations, arr1 = [2] and arr2 = [1].
In the 3rd operation, as the last element of arr1 is greater than the last element of arr2 (2 > 1), append nums[3] to arr1.
After 3 operations, arr1 = [2,3] and arr2 = [1].
Hence, the array result formed by concatenation is [2,3,1].

*/

vector<int> resultArray(vector<int> &nums)
{
    vector<int> arr1;
    vector<int> arr2;
    arr1.push_back(nums[0]);
    arr2.push_back(nums[1]);
    for (int i = 2; i < nums.size(); i++)
    {
        if (arr1.back() > arr2.back())
        {
            arr1.push_back(nums[i]);
        }
        else if (arr2.back() > arr1.back())
        {
            arr2.push_back(nums[i]);
        }
    }
    arr1.insert(arr1.end(), arr2.begin(), arr2.end());
    return arr1;
}

int main()
{
    vector<int> arr = {2, 1, 3};
    vector<int> result = resultArray(arr);
    for (int i : result)
    {
        cout << i << " ";
    }

    return 0;
}