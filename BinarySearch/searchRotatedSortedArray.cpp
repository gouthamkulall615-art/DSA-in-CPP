

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
            return mid;


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

    return -1;
}

int main() {

    vector<int> nums = {7,8,9,1,2,3,4,5,6};

    int target = 0;

    if (search(nums, target))
        cout << "Target Found";
    else
        cout << "Target Not Found";

    return 0;
}