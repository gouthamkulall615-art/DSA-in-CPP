#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> days = {7, 1, 5, 3, 6, 4};
    int minPrice = days[0];
    int maxProfit = 0;
    int todaysProfit = 0;

    for (int i = 0; i < days.size(); i++)
    {
        if (minPrice > days[i])
        {
            minPrice = days[i];
        }

        todaysProfit = days[i] - minPrice;

        if (todaysProfit > maxProfit)
        {
            maxProfit = todaysProfit;
        }
    }
    cout << "the best time to sell and buy is " << maxProfit;

    return 0;
}