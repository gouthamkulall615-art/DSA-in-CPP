#include <bits/stdc++.h>
using namespace std;

void deleteAtIndex(int arr[], int &n, int index)
{

    if (index < 0 || index >= n)
        return;

    for (int i = index; i < n - 1; i++)
    {

        arr[i] = arr[i + 1];
    }
    n--;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    deleteAtIndex(arr, n, 2);

    return 0;
}