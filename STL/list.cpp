#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    list<int> n(l);
    

    l.push_back(1);
    l.push_front(2);

    for (int i : l)
    {
        cout << i << " ";
    }
    l.erase(l.begin());
    cout << "after erase" << endl;

    for (int i : l)
    {
        cout << i << " ";
    }

    cout<<"size of list"<<l.size()<<endl;


    return 0;
}