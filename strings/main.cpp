#include <bits/stdc++.h>
using namespace std;

int main()
{

    // char name[20];
    // cout << "enter ur name" << endl;
    // space will not be consider by the cin
    // cin >> name;
    // cout << "ur name is ";
    // cout << name;

    char name[20] = {'f', 'i', 'g', 'h', 't'};
    int i = 0;
    int count = 0;

    while (name[i] != '\0')
    {
        count++;
        i++;
    }
    cout << "count is " << count;

    return 0;
}