#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> fairCandySwap(vector<int> &aliceSizes, vector<int> &bobSizes)
{

    // Step 1: Find the total number of candies Alice has
    int aliceTotal = 0;

    for (int x : aliceSizes)
    {
        aliceTotal += x;
    }

    // Step 2: Find the total number of candies Bob has
    int bobTotal = 0;

    for (int x : bobSizes)
    {
        bobTotal += x;
    }

    /*
        Suppose Alice gives x candies
        and Bob gives y candies.

        After exchange:

        Alice = aliceTotal - x + y
        Bob   = bobTotal - y + x

        We want both totals to be equal:

        aliceTotal - x + y = bobTotal - y + x

        Rearranging:

        aliceTotal - bobTotal = 2x - 2y

        Therefore:

        x - y = (aliceTotal - bobTotal) / 2

        Let:

        diff = (aliceTotal - bobTotal) / 2

        Then:

        x - y = diff

        Therefore:

        y = x - diff
    */

    int diff = (aliceTotal - bobTotal) / 2;

    // Binary search requires Bob's array to be sorted
    sort(bobSizes.begin(), bobSizes.end());

    // Try every box Alice could give
    for (int x : aliceSizes)
    {

        // Calculate which Bob box we need
        int y = x - diff;

        /*
            Now search for y inside Bob's boxes
            using manual binary search.
        */

        int low = 0;
        int high = bobSizes.size() - 1;

        while (low <= high)
        {

            int mid = low + (high - low) / 2;

            if (bobSizes[mid] == y)
            {

                // Found the required pair
                return {x, y};
            }
            else if (bobSizes[mid] < y)
            {

                // y must be on the right side
                low = mid + 1;
            }
            else
            {

                // y must be on the left side
                high = mid - 1;
            }
        }
    }

    // This should never happen because
    // the problem guarantees an answer exists.
    return {};
}

int main()
{

    vector<int> aliceSizes = {1, 2};
    vector<int> bobSizes = {2, 3};

    vector<int> answer = fairCandySwap(aliceSizes, bobSizes);

    cout << "Alice gives: " << answer[0] << endl;
    cout << "Bob gives: " << answer[1] << endl;

    return 0;
}