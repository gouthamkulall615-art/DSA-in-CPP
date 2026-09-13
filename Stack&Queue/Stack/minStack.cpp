#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<long long> st;
    long long minVal;

    MinStack() {
    }

    void push(int val) {
        if (st.empty()) {
            st.push(val);
            minVal = val;
        }
        else if (val >= minVal) {
            st.push(val);
        }
        else {
            st.push(2LL * val - minVal);
            minVal = val;
        }
    }

    void pop() {
        if (st.top() < minVal) {
            minVal = 2LL * minVal - st.top();
        }

        st.pop();
    }

    int top() {
        if (st.top() < minVal)
            return minVal;

        return st.top();
    }

    int getMin() {
        return minVal;
    }
};

int main() {
    MinStack s;

    s.push(5);
    s.push(3);
    s.push(7);
    s.push(2);

    cout << "Top: " << s.top() << endl;
    cout << "Minimum: " << s.getMin() << endl;

    s.pop();

    cout << "After pop:" << endl;
    cout << "Top: " << s.top() << endl;
    cout << "Minimum: " << s.getMin() << endl;

    s.pop();

    cout << "After another pop:" << endl;
    cout << "Top: " << s.top() << endl;
    cout << "Minimum: " << s.getMin() << endl;

    return 0;
}