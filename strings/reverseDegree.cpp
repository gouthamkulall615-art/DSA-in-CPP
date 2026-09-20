#include <bits/stdc++.h>
using namespace std;

int reverseDegree(string s) {
    int sum = 0;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];

        int reverseValue = 26 - (c - 'a');
        int pos = i + 1;

        sum += reverseValue * pos;
    }

    return sum;
}

int main() {
    string s;

    cout << "Enter a string: ";
    cin >> s;

    int result = reverseDegree(s);

    cout << "Reverse Degree = " << result << endl;

    return 0;
}