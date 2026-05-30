#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    // moves the zeros to start
    //  for (int i = 0; i < n; i++)
    //  {

    //     for (int j = 0; j < n; j++)
    //     {
    //         if (arr[j] != 0)
    //         {
    //             swap(arr[j], arr[i]);
    //         }
    //     }
    // }

    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[i]);
            i++;
        }
    }
    cout << "moved the zeros array is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}