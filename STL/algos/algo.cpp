#include <iostream>
#include <vector>
#include <algorithm> // for STL algorithms
#include <numeric>   // for accumulate, iota

using namespace std;

int main()
{
    vector<int> v = {5, 2, 8, 1, 2, 7};

    // ---------------- SORT ----------------

    sort(v.begin(), v.end()); // ascending sort

    // v = 1 2 2 5 7 8

    sort(v.begin(), v.end(), greater<int>()); // descending sort

    // v = 8 7 5 2 2 1

    // ---------------- REVERSE ----------------

    reverse(v.begin(), v.end());

    // reverse the vector

    // ---------------- MAX / MIN ----------------

    int maxi = *max_element(v.begin(), v.end());

    int mini = *min_element(v.begin(), v.end());

    cout << "Max = " << maxi << endl;
    cout << "Min = " << mini << endl;

    // ---------------- BINARY SEARCH ----------------

    sort(v.begin(), v.end());

    // binary_search works only on sorted array

    if (binary_search(v.begin(), v.end(), 5))
    {
        cout << "5 found" << endl;
    }

    // ---------------- LOWER BOUND ----------------

    // first element >= target

    auto lb = lower_bound(v.begin(), v.end(), 2);

    cout << "Lower bound index = "
         << lb - v.begin() << endl;

    // ---------------- UPPER BOUND ----------------

    // first element > target

    auto ub = upper_bound(v.begin(), v.end(), 2);

    cout << "Upper bound index = "
         << ub - v.begin() << endl;

    // ---------------- COUNT ----------------

    int c = count(v.begin(), v.end(), 2);

    cout << "Count of 2 = " << c << endl;

    // ---------------- FIND ----------------

    auto it = find(v.begin(), v.end(), 7);

    if (it != v.end())
    {
        cout << "7 found at index "
             << it - v.begin() << endl;
    }

    // ---------------- ACCUMULATE ----------------

    int sum = accumulate(v.begin(), v.end(), 0);

    cout << "Sum = " << sum << endl;

    // ---------------- UNIQUE ----------------

    sort(v.begin(), v.end());

    // removes duplicates logically

    v.erase(unique(v.begin(), v.end()), v.end());

    // now duplicates removed

    // ---------------- ROTATE ----------------

    vector<int> a = {1, 2, 3, 4, 5};

    rotate(a.begin(), a.begin() + 2, a.end());

    // output:
    // 3 4 5 1 2

    // ---------------- FILL ----------------

    fill(a.begin(), a.end(), 10);

    // all values become 10

    // ---------------- IOTA ----------------

    vector<int> b(5);

    iota(b.begin(), b.end(), 1);

    // b = 1 2 3 4 5

    // ---------------- NEXT PERMUTATION ----------------

    string s = "abc";

    next_permutation(s.begin(), s.end());

    // s becomes "acb"

    // ---------------- IS_SORTED ----------------

    if (is_sorted(v.begin(), v.end()))
    {
        cout << "Vector is sorted" << endl;
    }

    // ---------------- FOR_EACH ----------------

    for_each(v.begin(), v.end(), [](int x)
             { cout << x << " "; });

    cout << endl;

    // ---------------- TRANSFORM ----------------

    vector<int> nums = {1, 2, 3};

    transform(nums.begin(), nums.end(),
              nums.begin(),
              [](int x)
              { return x * 2; });

    // nums = 2 4 6

    // ---------------- ALL_OF ----------------

    if (all_of(nums.begin(), nums.end(),
               [](int x)
               { return x > 0; }))
    {
        cout << "All positive" << endl;
    }

    // ---------------- ANY_OF ----------------

    if (any_of(nums.begin(), nums.end(),
               [](int x)
               { return x == 4; }))
    {
        cout << "4 exists" << endl;
    }

    // ---------------- NONE_OF ----------------

    if (none_of(nums.begin(), nums.end(),
                [](int x)
                { return x < 0; }))
    {
        cout << "No negative numbers" << endl;
    }

    return 0;
}