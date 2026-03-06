#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    int result = isPrime(n);
    if (result == 0)
    {
        cout << "the not a  prime";
    }
    else
    {
        cout << "the no is  prime";
    }
    return 0;
}