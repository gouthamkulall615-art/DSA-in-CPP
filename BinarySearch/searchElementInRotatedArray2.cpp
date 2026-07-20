/*
==========================================================
LeetCode 81. Search in Rotated Sorted Array II
==========================================================

Question:
You are given a rotated sorted array that may contain
duplicate elements. Return true if the target exists,
otherwise return false.

Example:
Input:
nums = [2,5,6,0,0,1,2]
target = 0

Output:
true

----------------------------------------------------------
Difference from LeetCode 33 (Search in Rotated Sorted Array)
----------------------------------------------------------

LeetCode 33:
-------------
- Array contains UNIQUE elements.
- At every step, one half is always guaranteed to be sorted.
- Binary Search works in O(log n).

Example:
[4,5,6,7,0,1,2]

LeetCode 81:
-------------
- Array MAY contain DUPLICATES.
- Sometimes we CANNOT determine which side is sorted.

Example:
[1,0,1,1,1]

low = 0
mid = 2
high = 4

nums[low] == nums[mid] == nums[high]

All are 1.

We cannot decide whether the left half or right half
is sorted because duplicates hide the rotation.

So we SHRINK BOTH SIDES:

low++
high--

This may happen many times.

Worst case:
[1,1,1,1,1,1,1]

Time Complexity becomes O(n).

----------------------------------------------------------
Time Complexity
----------------------------------------------------------
Best/Average : O(log n)
Worst        : O(n) (because of duplicate shrinking)

Space Complexity : O(1)
==========================================================
*/

#include <iostream>
#include <vector>
using namespace std;

bool search(vector<int>& nums, int target) {

    int low = 0;
    int high = nums.size() - 1;

    while (low <= high) {

        int mid = low + (high - low) / 2;

        // Target found
        if (nums[mid] == target)
            return true;

        // ==================================================
        // Difference from LeetCode 33
        //
        // If duplicates exist at low, mid and high,
        // we cannot determine which half is sorted.
        //
        // Example:
        // [1,1,1,3,1]
        //
        // Therefore shrink both ends.
        // ==================================================
        if (nums[low] == nums[mid] &&
            nums[mid] == nums[high]) {

            low++;
            high--;
            continue;
        }

        // Left half is sorted
        if (nums[low] <= nums[mid]) {

            if (nums[low] <= target &&
                target < nums[mid]) {

                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        // Right half is sorted
        else {

            if (nums[mid] < target &&
                target <= nums[high]) {

                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
    }

    return false;
}

int main() {

    vector<int> nums = {2,5,6,0,0,1,2};

    int target = 0;

    if (search(nums, target))
        cout << "Target Found";
    else
        cout << "Target Not Found";

    return 0;
}