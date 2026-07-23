#include <bits/stdc++.h>
using namespace std;

int func(int mid, int n)
{
    long long ans = 1;
    long long base = mid;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            ans = ans * base;
            n = n - 1;
        }
        else
        {
            base = base * base;
            n = n / 2;
        }
    }
    return ans;
}

int NthRoot(int n, int m)
{
    int low = 1;
    int high = m;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int midN = func(mid, n);
        if (midN == m)
        {
            return mid;
        }
        else if (midN < m)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()

{

    int n = 3, m = 8; // 2^3 = 8
    int result = NthRoot(n, m);
    cout << result;

    return 0;
}