#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100], n, i;

    cout << "enter the n value";
    cin >> n;
    cout << "enter the array elements";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxEle = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > maxEle)
        {
            maxEle = arr[i];
        }
    }
    int minEle = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] < minEle)
        {
            minEle = arr[i];
        }
    }
    cout << "the largest element is" << maxEle;
    cout << "the smallest element is" << minEle;
    return 0;
}