#include <bits/stdc++.h>
using namespace std;

int main()
{
    int hun, fiv, twen, one;
    int amount;
    cout << "enter the amount " << endl;
    cin >> amount;
    switch (1)
    {
    case 1:
        hun = amount / 100;
        amount = amount % 100;
        cout << "the no of 100 needed is " << hun << endl;

    case 2:
        fiv = amount / 50;
        amount = amount % 50;
        cout << "the no of 50 needed is " << fiv << endl;

    case 3:
        twen = amount / 20;
        amount = amount % 20;
        cout << "the no of 20 needed is" << twen << endl;

    case 4:
        one = amount / 1;
        amount = amount % 1;
        cout << "the no of 1's needed is" << one << endl;
    }
    return 0;
}