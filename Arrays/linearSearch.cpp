#include <bits/stdc++.h>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {5, 1, 3, -4, 7, 9, 12, 10, 45, 0};
    cout << "enter the element to be searched" << endl;
    int key;
    cin >> key;
    bool found = search(arr, 10, key);
    if (found == 1)
    {
        cout << "element has been found";
    }
    else
    {
        cout << "element has not been found";
    }
    return 0;
}