#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = (start + end) / 2;
        
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1; // Return -1 if target is not found
}

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    int ans = binary_search(arr, n, target);

    cout << "The answer is " << ans << endl;

    return 0;
}
