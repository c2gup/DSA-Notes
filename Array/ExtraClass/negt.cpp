#include <iostream>
using namespace std;

// Function to solve the problem
void solve(int arr[], int size) {
    int front = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            swap(arr[front], arr[i]);
            front++;
        }
    }
}

int main() {
    // Define an array with both positive and negative elements
    int arr[] = {3, -1, 7, -4, 2, -9, 6, -8, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Print the elements of the array before modification
    cout << "The elements of the array are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Solve the problem and print the elements of the array after modification
    cout << "After modifying the array: " << endl;
    solve(arr, size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
