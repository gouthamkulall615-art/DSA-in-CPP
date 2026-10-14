#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string maxSumOfSquares(int num, int sum)
{
    if (sum > 9 * num)
        return "";

    string ans = "";

    for (int i = 0; i < num; i++)
    {
        int digit = min(9, sum);
        ans += to_string(digit);
        sum -= digit;
    }

    return ans;
}

int main()
{
    int num, sum;
    cin >> num >> sum;

    cout << maxSumOfSquares(num, sum);

    return 0;
}