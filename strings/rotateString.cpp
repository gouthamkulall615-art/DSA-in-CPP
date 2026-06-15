#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {

        // Rotation cannot change the length of a string
        if (s.length() != goal.length())
            return false;

        // Key Observation:
        // All possible rotations of s are present as
        // substrings of (s + s)
        string doubled = s + s;

        // find() returns:
        // - starting index if substring is found
        // - string::npos if substring is not found
        return doubled.find(goal) != string::npos;
    }
};

int main() {
    Solution obj;

    string s = "abcde";
    string goal = "cdeab";

    if (obj.rotateString(s, goal))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}


// 1. Lengths must be equal.
//    Otherwise rotation is impossible.

// 2. Create doubled string:
//    s + s

// 3. Every rotation of s appears as a
//    contiguous substring inside (s + s).

// Example:
// s = "abcde"
// s+s = "abcdeabcde"
//
// Rotations:
// abcde
// bcdea
// cdeab
// deabc
// eabcd

// 4. Check if goal exists inside (s+s)
//    using find().

// 5. find() returns string::npos
//    when substring is not present.

// Time Complexity:
// O(n) average for find()
// O(n²) worst case depending on implementation

// Space Complexity:
// O(n) for storing s+s