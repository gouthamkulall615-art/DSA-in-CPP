#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "the sky is blue";

    stringstream ss(s);
    vector<string> words;
    string word;

    string ans = "";

    while (ss >> word)
    {
        words.push_back(word);
    }

    reverse(words.begin(), words.end());

    for (int i = 0; i < words.size(); i++)
    {
        ans += words[i];
        if (i != words.size() - 1)
        {
            ans += " ";
        }
    }

    cout << "the reversed words are  " << ans;

    return 0;
}