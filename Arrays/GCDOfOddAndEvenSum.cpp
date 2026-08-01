#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sumOdd = 0, sumEven = 0;

    sumEven = n * (n + 1);
    sumOdd = n * n;

    int gcd = 1;

    for (int i = 1; i <= min(sumEven, sumOdd); i++)
    {
        if (sumEven % i == 0 && sumOdd % i == 0)
        {
            gcd = i;
        }
    }

    cout << gcd << endl;

    return 0;
}