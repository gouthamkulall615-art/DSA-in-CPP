#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>

using namespace std;

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{

    unordered_map<int, int> next;
    stack<int> s;

    for (int i = nums2.size() - 1; i >= 0; --i)
    {

        while (!s.empty() && s.top() <= nums2[i])
        {
            s.pop();
        }

        if (s.empty())
        {
            next[nums2[i]] = -1;
        }
        else
        {
            next[nums2[i]] = s.top();
        }

        s.push(nums2[i]);
    }

    vector<int> res;

    for (int num : nums1)
    {
        res.push_back(next[num]);
    }

    return res;
}

int main()
{

    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};

    vector<int> result = nextGreaterElement(nums1, nums2);

    cout << "Next Greater Elements: ";

    for (int x : result)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}