#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;

        // Skip trailing spaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        int len = 0;

        // Count the last word
        while (i >= 0 && s[i] != ' ') {
            len++;
            i--;
        }

        return len;
    }
};

int main() {
    Solution obj;

    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    cout << "Length of last word: " << obj.lengthOfLastWord(s) << endl;

    return 0;
}