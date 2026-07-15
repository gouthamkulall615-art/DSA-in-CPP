#include <bits/stdc++.h>
using namespace std;

void count(int i, int n)
{
    if (i > n)
        return;

    cout << i << endl;
    count(i + 1, n);
}
int main()
{

    int n;
    cout << "enter the limit" << endl;
    cin >> n;
    count(1, n);

    return 0;
}