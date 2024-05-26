#include <iostream>
using namespace std;

void printReverse(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main() {
    int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};

    cout << "Original array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    printReverse(arr, size);

    cout << "Array after reversing:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
