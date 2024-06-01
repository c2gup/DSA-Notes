#include <iostream>
#include <algorithm> // For std::sort
using namespace std;

int find_first_occ(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;
    int ans = -1;

    while (start <= end) {
        int mid = (start + end) / 2;
        
        if (arr[mid] == target) {
            ans = mid;
            end = mid - 1;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans; // Return -1 if target is not found
}

int main() {
    int arr[] = {2,3,3,3,4,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;

    // Sort the array first
    sort(arr, arr + n);

    int ans = find_first_occ(arr, n, target);

    cout << "The answer is " << ans << endl;

    return 0;
}
