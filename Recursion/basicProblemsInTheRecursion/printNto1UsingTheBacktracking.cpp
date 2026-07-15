#include <bits/stdc++.h>
using namespace std;

void count(int i)
{
    if (i < 1)
        return;

    cout << i << endl;
    count(i - 1);
}

int main()
{
    int n;
    cout << "Enter the n value: ";
    cin >> n;

    count(n);

    return 0;
}