#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &books, int m, int mid)
{
    int studentsNeeded = 1;
    int current = 0;

    for (int pages : books)
    {
        if (current + pages > mid)
        {
            studentsNeeded++;
            current = pages;
        }
        else
        {
            current += pages;
        }
    }
    if (studentsNeeded <= m)
    {
        return 1;
    }
    else
        return 0;
}

int findPages(vector<int> &books, int m)
{
    int low = *max_element(books.begin(), books.end());
    int high = accumulate(books.begin(), books.end(), 0);
    if (m > books.size())
        return -1;
    int ans = high;

    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (isPossible(books, m, mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> books = {10, 20, 30, 40, 50};
    int m = 3;
    int result = findPages(books, m);
    cout << "the answer is " << result;

    return 0;
}