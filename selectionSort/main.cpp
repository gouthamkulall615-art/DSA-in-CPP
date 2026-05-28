#include <iostream>
using namespace std;

int main() {

    // Array declaration
    int arr[] = {64, 25, 12, 22, 11};

    // Finding size of array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Selection Sort Logic
    // In every pass:
    // 1. Find the smallest element
    // 2. Swap it with current index

    for (int i = 0; i < n - 1; i++) {

        // Assume current index has minimum element
        int minIndex = i;

        // Check remaining unsorted array
        for (int j = i + 1; j < n; j++) {

            // If smaller element found
            if (arr[j] < arr[minIndex]) {

                // Update minimum index
                minIndex = j;
            }
        }

        // Swap smallest element with current position
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    // Printing sorted array
    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}