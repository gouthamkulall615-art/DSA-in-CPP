#include <bits/stdc++.h>
using namespace std;
void sortColors(vector<int> &num)
{
    int zeroes = 0, ones = 0, twos = 0;
    for (int x : num)
    {
        if (x == 0)
            zeroes++;
        else if (x == 1)
            ones++;
        else
            twos++;
    }
    int i = 0;
    while (zeroes--)
        num[i++] = 0;
    while (ones--)
        num[i++] = 1;
    while (twos--)
        num[i++] = 2;
}

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColors(nums);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
    }

    return 0;
}