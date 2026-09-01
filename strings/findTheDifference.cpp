#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

char findTheDifference(string s, string t) {
    unordered_map<char, int> mp;

    // Count characters in t
    for(char c : t) {
        mp[c]++;
    }

    // Remove characters present in s
    for(char c : s) {
        mp[c]--;
    }

    // Find the character with count 1
    for(auto x : mp) {
        if(x.second == 1) {
            return x.first;
        }
    }

    return '\0';
}

int main() {
    string s, t;

    cout << "Enter string s: ";
    cin >> s;

    cout << "Enter string t: ";
    cin >> t;

    char result = findTheDifference(s, t);

    cout << "The extra character is: " << result << endl;

    return 0;
}