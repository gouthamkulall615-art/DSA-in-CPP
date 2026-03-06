#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 2;
    char ch = '1';
    cout << endl;
    switch (ch)
    {
    case 1:
        cout << "first" << endl;
        break;

    case '1':
        switch (num)
        {
        case 2:
            cout << "one" << endl;

            break;
        }
        break;

    default:
        cout << "it is a default case" << endl;
    }
    return 0;
}