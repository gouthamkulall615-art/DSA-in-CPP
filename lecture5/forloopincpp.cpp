#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // cout << "printing one to ten numners" << endl;
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << i << endl;
    // }

    // sum of the n numners
    // int sum = 0;
    // for (int i = 0; i <= n; i++)
    // {
    //     sum += i;
    // }
    // cout << sum;

    // fibonacci series

    // int a = 0;
    // int b = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     int nextNumber = a + b;
    //     cout << nextNumber << " ";

    //     a = b;
    //     b = nextNumber;
    // }

    // prime number
    bool isPrime = 1;

    for (int i = 2; i <n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;

            break;
        }
    }
    if (isPrime == 0)
    {
        cout << "not a prime number" << endl;
    }
    else
    {
        cout << "is a prime number" << endl;
    }

    return 0;
}