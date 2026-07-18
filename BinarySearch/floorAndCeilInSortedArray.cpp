// floor-> largest no in the array<=n

// ceil-> smallest no in the array>=n

// arr=[10,20,25,30,40,50]

// if x=25

// floor is  25
// ceil is 25

// if x=27
// floor= 20
// ceil=30

#include <bits/stdc++.h>
using namespace std;

int findFloor(vector<int> &arr, int x)
{
    int low = 0, high = arr.size() - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] <= x)
        {
            ans = arr[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

int findCeil(vector<int> &arr, int x)
{
    int low = 0, high = arr.size() - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x)
        {
            ans = arr[mid];
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {10, 20, 25, 30, 40, 50};

    int x = 27;

    cout << "Floor = " << findFloor(arr, x) << endl;
    cout << "Ceil = " << findCeil(arr, x) << endl;

    return 0;
}