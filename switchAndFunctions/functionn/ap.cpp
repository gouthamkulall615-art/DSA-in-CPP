#include <bits/stdc++.h>
using namespace std;

int arithmetic(int n)
{
    int res = (3 * n) + 7;
    return res;
}
int main()
{
    int n;
    cin >> n;
    cout << "the nth term is " << arithmetic(n);
    return 0;
}