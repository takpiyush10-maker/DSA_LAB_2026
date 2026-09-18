#include <iostream>
#include <vector>
using namespace std;

// Initialize a function.
int BinarySearch(const vector<int>& arr, int target) {
    int start = 0, end = arr.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2; // Avoid potential overflow

        if (target > arr[mid]) {
            start = mid + 1;
        }
        else if (target < arr[mid]) {
            end = mid - 1;
        }
        else {
            return mid; // Target found
        }
    }

    return -1; // Target not found
}

int main() {
    vector<int> arr = {-1, 0, 2, 3, 4, 5, 6}; // Use vector instead of raw array
    int target = 0;

    cout << BinarySearch(arr, target) << "\n";

    return 0;
}