#include <bits/stdc++.h>
using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids) {
    list<int> st;

    for (int x : asteroids) {
        bool alive = true;

        while (alive && !st.empty() && st.back() > 0 && x < 0) {
            if (st.back() < -x) {
                st.pop_back();
            }
            else if (st.back() == -x) {
                st.pop_back();
                alive = false;
            }
            else {
                alive = false;
            }
        }

        if (alive) {
            st.push_back(x);
        }
    }

    return vector<int>(st.begin(), st.end());
}

int main() {
    vector<int> asteroids = {5, 10, -5};

    vector<int> result = asteroidCollision(asteroids);

    cout << "Result: ";

    for (int x : result) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}