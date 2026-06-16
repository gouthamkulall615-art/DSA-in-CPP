/*
LeetCode 3612 - Process String with Special Operations I

Problem:
You are given a string s consisting of lowercase English letters and the
special characters '*', '#', and '%'.

Process the string from left to right and build a new string called result.

Rules:
1. Lowercase letter:
   - Append it to result.

2. '*':
   - Remove the last character from result if it exists.

3. '#':
   - Duplicate the current result and append it to itself.

4. '%':
   - Reverse the current result.

Return the final string result.

Example:
Input:  "a#b%*"
Output: "ba"

Explanation:
'a' -> "a"
'#' -> "aa"
'b' -> "aab"
'%' -> "baa"
'*' -> "ba"
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string processStr(string s) {
        string result = "";

        for (int i = 0; i < s.length(); i++) {

            if (s[i] >= 'a' && s[i] <= 'z') {
                result += s[i];
            }
            else if (s[i] == '#') {
                result += result;
            }
            else if (s[i] == '%') {
                reverse(result.begin(), result.end());
            }
            else if (s[i] == '*') {
                if (!result.empty()) {
                    result.pop_back();
                }
            }
        }

        return result;
    }
};

int main() {
    Solution obj;

    string s;
    cin >> s;

    cout << obj.processStr(s) << endl;

    return 0;
}