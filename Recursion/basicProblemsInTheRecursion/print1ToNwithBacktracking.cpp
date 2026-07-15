#include <bits/stdc++.h>
using namespace std;

void count(int i, int n)
{
    if (i < 1)
        return;

    count(i - 1, n); // this line helps in the backtracking
    cout << i << endl;
}

int main()
{
    int n;
    cout << "Enter the n value" << endl;
    cin >> n;
    count(n, n);

    return 0;
}