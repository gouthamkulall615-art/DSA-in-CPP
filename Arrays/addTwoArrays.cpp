#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 3};
    int arr2[] = {9, 9};

    vector<int> ans;

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int i = n - 1;
    int j = m - 1;
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int sum = arr1[i] + arr2[j] + carry;

        carry = sum / 10;
        sum = sum % 10;

        ans.push_back(sum);

        i--;
        j--;
    }

    while (i >= 0)
    {
        int sum = arr1[i] + carry;

        carry = sum / 10;
        sum = sum % 10;

        ans.push_back(sum);

        i--;
    }

    while (j >= 0)
    {
        int sum = arr2[j] + carry;

        carry = sum / 10;
        sum = sum % 10;

        ans.push_back(sum);

        j--;
    }

    while (carry != 0)
    {
        ans.push_back(carry % 10);
        carry /= 10;
    }

    reverse(ans.begin(), ans.end());

    cout << "The answer is: ";

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}