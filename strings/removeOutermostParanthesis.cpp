/*
LeetCode 1021 - Remove Outermost Parentheses

Approach:
- Maintain a balance counter.
- For '(':
    * If balance > 0, it is not an outermost '(',
      so add it to the answer.
    * Then increment balance.
- For ')':
    * First decrement balance.
    * If balance > 0, it is not an outermost ')',
      so add it to the answer.

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int balance = 0;

        for (char ch : s) {
            if (ch == '(') {
                if (balance > 0)
                    ans += ch;
                balance++;
            } else {
                balance--;
                if (balance > 0)
                    ans += ch;
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;

    cout << obj.removeOuterParentheses("(()())(())") << endl;     // ()()()
    cout << obj.removeOuterParentheses("(()())(())(()(()))") << endl; // ()()()()(())
    cout << obj.removeOuterParentheses("()()") << endl;           // ""

    return 0;
}