#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> digits = {9, 8, 9, 9};
    int n = digits.size();

    for (int i = n - 1; i >= 0; i--)
    {
        if (digits[i] == 9)
        {
            digits[i] = 0;
        }

        else
        {
            digits[i]++;
            break;
        }
    }

    if (digits[0] == 0)
    {
        digits.insert(digits.begin(), 1);
    }

    cout << "the answer is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << digits[i] << " ";
    }

    return 0;
}