#include <bits/stdc++.h>
using namespace std;
// it takes the space of O(n)
//  void rotate(vector<int> &arr, int k)
//  {
//      vector<int> temp(arr.size());

//     for (int i = 0; i < arr.size(); i++)
//     {
//         temp[(i + k) % arr.size()] = arr[i];
//     }

//     arr = temp;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// optimal solution with the O(1);

/*step1 : reverse the entire array
step2:reverse the first k elements
step3 reverse the other elements


 */

void rotate(vector<int> nums, int k)
{
    int n = nums.size();

     k = k % n;

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);

    reverse(nums.begin() + k, nums.end());

    for (int i = 0; i < n; i++)
    {

        cout << nums[i] << " ";
    }
}
int main()
{

    vector<int> arr = {11, 12, 13, 14};
    int k = 2;
    rotate(arr, k);

    return 0;
}