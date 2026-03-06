#include <bits/stdc++.h>
using namespace std;

int countOnes(int x)
{
    int count = 0;
    while (x)
    {
        x = x & (x - 1);
        count++;
    }
    return count;
}

int main()
{
    int a, b;
    cout << "enter the a and b values" << endl;
    cin >> a >> b;
    int x = a & b;
    cout << countOnes(x);
    return 0;
}