#include <iostream>
#include <sstream>
#include <unordered_map>
#include <vector>
using namespace std;

bool wordPattern(string pattern, string s) {
    unordered_map<char, string> charToWord;
    unordered_map<string, char> wordToChar;

    stringstream ss(s);
    string word;
    vector<string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    if (words.size() != pattern.size())
        return false;

    for (int i = 0; i < pattern.size(); i++) {
        char ch = pattern[i];
        string word = words[i];

        // Both are new
        if (charToWord.count(ch) == 0 && wordToChar.count(word) == 0) {
            charToWord[ch] = word;
            wordToChar[word] = ch;
        }
        // One exists, the other doesn't
        else if (charToWord.count(ch) != wordToChar.count(word)) {
            return false;
        }
        // Both exist, verify mapping
        else if (charToWord[ch] != word || wordToChar[word] != ch) {
            return false;
        }
    }

    return true;
}

int main() {
    string pattern;
    string s;

    cout << "Enter pattern: ";
    cin >> pattern;

    cin.ignore();

    cout << "Enter string: ";
    getline(cin, s);

    bool ans = wordPattern(pattern, s);

    if (ans)
        cout << "True\n";
    else
        cout << "False\n";

    return 0;
}