#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {3, 4, 6, 7, 9, 12, 16, 17};
    int n = 8;
    int target = 0;

    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (target == arr[mid])
        {
            cout << "Element " << arr[mid] << " found at index " << mid << endl;
            break;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
    }

    cout << "element not found " << endl;

    return 0;
}