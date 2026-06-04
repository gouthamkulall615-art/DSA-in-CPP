#include <bits/stdc++.h>
using namespace std;

string replaceSpaces(string &str)
{
    //it as space complexity of O(1)
    // string temp = "";
    // for (int i = 0; i < str.length(); i++)
    // {
    //     if (str[i] == ' ')
    //     {
    //         temp.push_back('@');
    //         temp.push_back('4');
    //         temp.push_back('0');
    //     }
    //     else
    //     {
    //         temp.push_back(str[i]);
    //     }
    // }
    // return temp;

    int spaces = 0;
    for (char ch : str)
    {
        if (ch == ' ')
            spaces++;
    }

    int oldLength = str.length();
    int newLength = oldLength + (spaces * 2);

    str.resize(newLength);

    int i = oldLength - 1;
    int j = newLength - 1;

    while (i >= 0)
    {
        if (str[i] == ' ')
        {
            str[j--] = '0';
            str[j--] = '4';
            str[j--] = '@';
        }
        else
        {
            str[j--] = str[i];
        }
        i--;
    }
    return str;
}

int main()
{

    string str = "goutham is good boy";
    string result = replaceSpaces(str);
    cout << "the result " << result;

    return 0;
}