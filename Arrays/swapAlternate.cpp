#include <bits/stdc++.h>
using namespace std;

void swapElements(int arr[], int n)
{

    for (int i = 0; i < n - 1; i += 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    swapElements(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}