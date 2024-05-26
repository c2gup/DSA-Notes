#include<iostream>
using namespace std;

int main() {
    int size = 5;
    int arr[size] = {2, 3, 4, 5, 6};

    cout << "Pairs of elements in the array:" << endl;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
             for (int k = 0; k < size; k++)
             {
                   cout << "(" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")" << endl;
             }
             
        }
    }

    return 0;
}
