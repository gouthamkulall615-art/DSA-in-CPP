#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int low, int high, int key)
{

    if (low > high)
    {
        return -1;
    }

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            return binarySearch(arr, mid + 1, high, key);
        }
        else
        {
            return binarySearch(arr, low, mid - 1, key);
        }
    }
}

int main()
{
    vector<int> arr = {3, 4, 6, 7, 9, 12, 16, 17};
    int n = 8;
    int target = 6;

    int start = 0;
    int end = n - 1;

    int result = binarySearch(arr, start, end, target);
    cout << "the result is " << result;
    return 0;
}