#include <iostream>
#include <stack>
using namespace std;
// stack uses last in first out concept
int main()
{
    stack<string> s;
    s.push("goutham");
    s.push("preethu");
    s.push("kumar");

    cout << "top element" << s.top() << endl;
    s.pop();
    cout << "top element" << s.top() << endl;

    cout << "empty or not" << s.empty();
    return 0;
}