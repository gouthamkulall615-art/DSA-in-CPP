#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    for (int i : d)
    {
        cout << i << endl;
    }

    d.pop_back();
    for (int i : d)
    {
        cout << i << endl;
    }

    // other function same as vectors

    // erase function

    cout << "Before Erase" << d.size() << endl;

    d.erase(d.begin(), d.begin() + 1);

    cout << "After erase" << d.size();

    return 0;
}