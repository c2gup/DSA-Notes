#include <iostream>
#include <algorithm> // For std::sort

int getPairsCount(int arr[], int n, int k) {
    int left = 0;
    int right = n - 1;
    int ans = 0;
    
    // Sort the array
    std::sort(arr, arr + n);
    
    // Two-pointer approach
    while (left < right) {
        int sum = arr[left] + arr[right];
        
        if (sum == k) {
            ans++;
            left++;
            right--;
        } else if (sum > k) {
            right--;
        } else {
            left++;
        }
    }
    
    return ans;
}

int main() {
    int arr[] = {1, 5, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 6;
    
    int result = getPairsCount(arr, n, k);
    std::cout << "Number of pairs with sum " << k << " is: " << result << std::endl;
    
    return 0;
}


