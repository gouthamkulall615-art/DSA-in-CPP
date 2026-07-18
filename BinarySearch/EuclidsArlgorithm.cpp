#include <bits/stdc++.h>
using namespace std;
int findGCD(vector<int> &nums)
{
    int mn = *min_element(nums.begin(), nums.end());
    int mx = *max_element(nums.begin(), nums.end());

    while (mn != 0)
    {
        int rem = mx % mn;
        mx = mn;
        mn = rem;
    }
    return mx;
}

int main()
{
    vector<int> arr = {2, 5, 6, 9, 10};
    int result = findGCD(arr);
    cout << "the GCD of the min and max element in the array" << result;

    return 0;
}