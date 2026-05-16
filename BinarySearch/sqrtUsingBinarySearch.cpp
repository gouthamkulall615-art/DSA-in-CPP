#include <iostream>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        long long start = 0;
        long long end = x;

        while (start <= end) {
            long long mid = start + (end - start) / 2;

            long long square = mid * mid;

            if (square == x) {
                return mid;
            }
            else if (square < x) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return end;
    }
};

int main() {
    Solution obj;

    int x;
    cout << "Enter number: ";
    cin >> x;

    cout << "Square root = " << obj.mySqrt(x);

    return 0;
}