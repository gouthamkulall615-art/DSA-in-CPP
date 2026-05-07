#include <iostream>
#include <queue>
using namespace std;

// queue follows the first in first out concept

int main()
{

    queue<string> q;
    q.push("lokesh");
    q.push("goutham");
    q.push("preetham");

    cout << "size before pop" << q.size() << endl;

    cout << "first element " << q.front() << endl;
    q.pop();
    cout << "first element after pop " << q.front() << endl;

    return 0;
}