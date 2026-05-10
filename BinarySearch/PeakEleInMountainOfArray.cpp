#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

    int peakIndexInMountainArray(vector<int>& arr) {

        int start = 0;
        int end = arr.size() - 1;

        while(start < end) {

            int mid = start + (end - start) / 2;

            // You are on increasing slope
            if(arr[mid] < arr[mid + 1]) {
                start = mid + 1;
            }

            // You are on decreasing slope or peak
            else {
                end = mid;
            }
        }

        // start == end => peak index
        return start;
    }
};

int main() {

    Solution obj;

    vector<int> arr = {1, 3, 5, 7, 6, 4, 2};

    int peak = obj.peakIndexInMountainArray(arr);

    cout << "Peak Index = " << peak << endl;
    cout << "Peak Element = " << arr[peak] << endl;

    return 0;
}