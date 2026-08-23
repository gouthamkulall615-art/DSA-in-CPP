#include <iostream>
#include <string>
using namespace std;

/*
    LeetCode 1927 - Sum Game

    QUESTION:
    You are given an even-length string num consisting of digits and '?'.

    Alice and Bob take turns replacing '?' with digits from 0 to 9.

    Alice wins if the sum of digits in the left half
    is NOT equal to the sum of digits in the right half.

    Bob wins if the two sums are equal.

    Alice plays first.

    Return true if Alice can win, otherwise return false.

    Examples:

    Input:  "5023"
    Output: false

    Input:  "25??"
    Output: true

    Input:  "?3295???"
    Output: false
*/


bool sumGame(string num) {

    int n = num.length();
    int half = n / 2;

    // Sum of known digits in each half
    int leftSum = 0;
    int rightSum = 0;

    // Number of '?' in each half
    int leftQ = 0;
    int rightQ = 0;


    // -----------------------------
    // Process LEFT half
    // -----------------------------

    for (int i = 0; i < half; i++) {

        if (num[i] == '?') {

            // Count the question mark
            leftQ++;

        } else {

            // Convert character digit to integer
            // and ADD it to the existing sum
            leftSum += num[i] - '0';
        }
    }


    // -----------------------------
    // Process RIGHT half
    // -----------------------------

    for (int i = half; i < n; i++) {

        if (num[i] == '?') {

            // Count the question mark
            rightQ++;

        } else {

            // Add the digit to right sum
            rightSum += num[i] - '0';
        }
    }


    // Difference between the known sums
    int sumDiff = leftSum - rightSum;

    // Difference between number of '?'s
    int quesDiff = leftQ - rightQ;


    /*
        IMPORTANT GAME THEORY CONDITION

        Bob can force the two sums to become equal
        only when:

            2 * sumDiff == -9 * quesDiff

        Therefore Alice wins when:

            2 * sumDiff != -9 * quesDiff
    */

    return (2 * sumDiff != -9 * quesDiff);
}


int main() {

    string num;

    cout << "Enter the string: ";
    cin >> num;

    bool result = sumGame(num);

    if (result) {
        cout << "Alice wins" << endl;
    } else {
        cout << "Bob wins" << endl;
    }

    return 0;
}