#include <iostream>
using namespace std;
 
int CountOneAndZero(int arr[], int size) {
    int countZero = 0;
    int countOne = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            countZero++;
        } else if (arr[i] == 1) {
            countOne++;
        }
    }
  return countZero and countOne;
}

int main() {
    int size = 5;
    int arr[size] = {0, 1, 0, 0, 1};

       CountOneAndZero(arr, size);
    
    

    return 0;
}
