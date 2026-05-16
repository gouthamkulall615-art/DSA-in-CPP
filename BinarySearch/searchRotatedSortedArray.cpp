#include <bits/stdc++.h>
using namespace std;

int getPivot(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int binarySearch(int arr[], int start, int end, int key)
{

    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }
    return -1;
}

int findPostion(int arr[], int n, int k)

{
    int pivot = getPivot(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1])

    { // search in the second sorted part
        return binarySearch(arr, pivot, n - 1, k);
    }
    else
    {
        // search in the first sorted part
        return binarySearch(arr, 0, n - 1, k);
    }
}

int main()
{

    int arr[5] = {7, 9, 1, 2, 3};
    int ans = findPostion(arr, 5, 10);
    cout << "element fount at" << ans;

    return 0;
}