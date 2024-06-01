#include <iostream>
#include <algorithm> 
using namespace std;


int find_last_occ(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;
    int ans = -1;

    while (start <= end) {
        int mid = (start + end) / 2;
        
        if (arr[mid] == target) {
            ans = mid;
            start = mid + 1; // Move left to find the first occurrence
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans; // Return -1 if target is not found
}



int find_first_occ(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;
    int ans = -1;

    while (start <= end) {
        int mid = (start + end) / 2;
        
        if (arr[mid] == target) {
            ans = mid;
            end = mid - 1; // Move left to find the first occurrence
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans; // Return -1 if target is not found
}

int main() {
    int arr[] = {2, 3, 3, 3, 4, 4, 5,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 3;

    // Sort the array first
    sort(arr, arr + n);

    

    int ans1 = find_first_occ(arr, n, target);
    int ans2 = find_last_occ(arr, n, target);
     int total = ans2-ans1;

    cout << "The answer is 1 ->  " << ans1 << endl;
    cout << "The answer is 2 -> " << ans2 << endl;
    cout << "The answer is  totl -> " << total << endl;

    return 0;
}

