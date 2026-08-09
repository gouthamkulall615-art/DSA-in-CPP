#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

// ============================================================
// SOLUTION 1: TWO MAPS
// ============================================================

bool isAnagramTwoMaps(string s, string t)
{

    // If lengths are different, they cannot be anagrams
    if (s.length() != t.length())
        return false;

    unordered_map<char, int> mp1;
    unordered_map<char, int> mp2;

    // Store frequency of characters in s
    for (char c : s)
    {
        mp1[c]++;
    }

    // Store frequency of characters in t
    for (char c : t)
    {
        mp2[c]++;
    }

    // Compare both maps
    return mp1 == mp2;
}

// ============================================================
// SOLUTION 2: ONE MAP
// Uncomment this entire function if you want to use it.
// ============================================================

/*
bool isAnagramOneMap(string s, string t) {

    if (s.length() != t.length())
        return false;

    unordered_map<char, int> mp;

    // Increase frequency for s
    for (char c : s) {
        mp[c]++;
    }

    // Decrease frequency for t
    for (char c : t) {
        mp[c]--;
    }

    // Every character should have frequency 0
    for (auto x : mp) {
        if (x.second != 0)
            return false;
    }

    return true;
}
*/

// ============================================================
// MAIN FUNCTION
// ============================================================

int main()
{

    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    if (isAnagramTwoMaps(s, t))
    {
        cout << "They are Anagrams" << endl;
    }
    else
    {
        cout << "They are NOT Anagrams" << endl;
    }

    return 0;
}