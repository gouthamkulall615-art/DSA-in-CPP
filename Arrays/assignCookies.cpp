#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findContentChildren(vector<int> &g, vector<int> &s)
{

    // Sort children's greed factors
    sort(g.begin(), g.end());

    // Sort cookie sizes
    sort(s.begin(), s.end());

    int i = 0;     // Pointer for children
    int j = 0;     // Pointer for cookies
    int count = 0; // Number of satisfied children

    // Continue while both a child and a cookie are available
    while (i < g.size() && j < s.size())
    {

        // If the cookie is big enough for the child
        if (s[j] >= g[i])
        {

            // This child is satisfied
            count++;

            // Move to the next child
            i++;

            // Move to the next cookie
            j++;
        }
        else
        {

            // Cookie is too small for this child
            // So discard this cookie
            j++;
        }
    }

    return count;
}

int main()
{

    // Example input
    vector<int> g = {1, 2, 3};
    vector<int> s = {1, 1, 2, 3};

    // Call the function
    int answer = findContentChildren(g, s);

    // Print result
    cout << "Maximum content children: " << answer << endl;

    return 0;
}