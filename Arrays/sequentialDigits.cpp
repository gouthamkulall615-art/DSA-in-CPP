#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> sequentialDigits(int low, int high) {
    string str = "123456789";
    int n = str.length();
    vector<int> ans;

    for (int length = 1; length <= n; length++) {
        for (int j = 0; j <= n - length; j++) {
            string sub = str.substr(j, length);
            int num = stoi(sub);

            if (low <= num && num <= high) {
                ans.push_back(num);
            }
        }
    }

    return ans;
}

int main() {
    int low, high;

    cout << "Enter low and high: ";
    cin >> low >> high;

    vector<int> result = sequentialDigits(low, high);

    cout << "Sequential Digits: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}