#include <bits/stdc++.h>
using namespace std;

string reversePrefix(string word, char ch)
{
    int j = word.find(ch);
    if (j != -1)
    {
        reverse(word.begin(), word.begin() + j + 1);
    }
    return word;
}

int main()
{

    string word = "abcdefd";
    char ch = 'd';
    string result = reversePrefix(word, ch);
    cout << "the reversed prefix sum is " << result;
    return 0;
}