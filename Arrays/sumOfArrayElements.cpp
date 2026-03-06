#include <bits/stdc++.h>
using namespace std;

int sumOfArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[100], i, n;
    cout << "enter the array size" << endl;
    cin >> n;
    cout << "enter the array elements to be summed" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "the sum is " << sumOfArray(arr, n);

    return 0;
}