#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "harry";
    m[2] = "ram";
    m[3] = "preethi";

    m.insert({5, "bheem"});

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "finding 5->" << m.count(5) << endl;

    cout << "after erase" << endl;
    m.erase(5);
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    auto it = m.find(2);

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }

    return 0;
}