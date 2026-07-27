#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        string result = "";

        while (columnNumber > 0)
        {
            columnNumber--;
            int rem = columnNumber % 26;
            result += ('A' + rem);
            columnNumber = columnNumber / 26;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};

int main()
{
    Solution obj;

    int columnNumber;
    cout << "Enter the column number: ";
    cin >> columnNumber;

    string ans = obj.convertToTitle(columnNumber);

    cout << "Excel Column Title: " << ans << endl;

    return 0;
}