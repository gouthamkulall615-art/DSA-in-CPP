// Question: Given an integer n, count how many numbers from 1 to n contain a comma
// when written in standard decimal notation.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;
    for (int i = 1000; i <= n; i++)
    {
        count++;
    }

    cout << count << endl;

    return 0;
}