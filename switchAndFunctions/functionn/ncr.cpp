#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int ncr(int n, int r)
{
    int ans = 1;
    int num = factorial(n);
    int deno = factorial(r) * factorial(n - r);
    ans = num / deno;
    return ans;
}

int main()
{
    int n, r;
    cout << "enter the n and r value" << endl;
    cin >> n >> r;
    factorial(n);
    int result = ncr(n, r);
    cout << "the ncr value is " << result;

    return 0;
}