#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x)
{
    int low = 0;
    int high = x;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        long long square = 1LL * mid * mid;

        if (square == x)
            return mid;
        else if (square < x)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return high;
}

int main()
{
    int n = 8;

    int result = mySqrt(n);

    cout << "The square root of the given number is " << result << endl;

    return 0;
}