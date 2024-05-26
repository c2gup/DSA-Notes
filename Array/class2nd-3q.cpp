#include <iostream>
using namespace std;

void shiftarry(int arr[], int size) {
    int temp = arr[size-1]; // Step 1: Store the last element

    for (int i = size-1; i >= 1; i--) { // Step 2: Shift elements to the right
        arr[i] = arr[i-1];
    }

    arr[0] = temp; // Step 3: Place the last element at the first position
}

int main() {
    int size = 5;
    int arr[size] = {2, 3, 4, 5, 6};

    // Print the original array
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Shift the array
    shiftarry(arr, size);

    // Print the shifted array
    cout << "Array after shifting: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    } 
    cout << endl;

    return 0;
}
