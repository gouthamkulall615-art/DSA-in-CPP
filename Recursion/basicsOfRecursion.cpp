#include <bits/stdc++.h>
using namespace std;
int cnt = 0;

void count()
{
    if (cnt == 5)
        return;

    cout << cnt << endl;
    cnt++;

    count();
}

int main()
{

    count();

    return 0;
}