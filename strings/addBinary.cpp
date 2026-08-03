#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        int i = a.length() - 1;
        int j = b.length() - 1;

        int carry = 0;
        string result = "";

        while (i >= 0 || j >= 0 || carry != 0)
        {
            int sum = carry;

            if (i >= 0)
            {
                sum += a[i] - '0';
            }

            if (j >= 0)
            {
                sum += b[j] - '0';
            }

            result += (sum % 2) + '0';
            carry = sum / 2;

            i--;
            j--;
        }

        reverse(result.begin(), result.end());

        return result;
    }
};

int main()
{
    Solution obj;

    string a, b;

    cout << "Enter first binary number: ";
    cin >> a;

    cout << "Enter second binary number: ";
    cin >> b;

    cout << "Sum = " << obj.addBinary(a, b) << endl;

    return 0;
}