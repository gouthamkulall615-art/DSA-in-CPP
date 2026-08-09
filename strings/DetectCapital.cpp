#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool detectCapitalUse(string word)
{

    int count = 0;

    // Count uppercase letters
    for (char c : word)
    {
        if (isupper(c))
        {
            count++;
        }
    }

    // All lowercase
    if (count == 0)
    {
        return true;
    }

    // All uppercase
    else if (count == word.length())
    {
        return true;
    }

    // Only first letter uppercase
    else if (count == 1 && isupper(word[0]))
    {
        return true;
    }

    return false;
}

int main()
{
    string word;

    cout << "Enter word: ";
    cin >> word;

    if (detectCapitalUse(word))
    {
        cout << "Correct capitalization" << endl;
    }
    else
    {
        cout << "Incorrect capitalization" << endl;
    }

    return 0;
}