#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int number = 0;
    cout << "enter the limit" << endl;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        number += i;
        cout << number << " ";
    }

    return 0;
}