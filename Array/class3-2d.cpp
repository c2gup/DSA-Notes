#include <iostream>
using namespace std;

// Function definition
void print_2d_array(int arr[][4], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) { 
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void sumrowsise_2d_array(int arr[][4], int row, int col) {
      
    for (int i = 0; i < row; i++) {
      int sum = 0;
        for (int j = 0; j < col; j++) { 
            sum = sum+arr[i][j];
        }
        cout << endl;
        cout <<sum << " ";
    }
}


// void print_2d_array_colwise(int arr[][4], int row, int col) {
//     for (int i = 0; i < col; i++) {
//         for (int j = 0; j < row; j++) {
//             cout << arr[j][i] << " ";
//         }
//         cout << endl;
//     }
// }




int main() {
    const int row = 4; // Define row as a constant
    const int col = 4; // Define col as a constant
    int arr[row][col] = {
        {1, 2, 3, 4},
        {2, 33, 44, 55},
        {3, 12, 13, 14},
        {14, 35, 56, 67}
    };

    // Print 2D array
    print_2d_array(arr, row, col);
    cout <<"-----------------------" <<endl;

    cout<<"Print the arry in columns wise "<<endl;

//     print_2d_array_colwise(arr,row,col);
    sumrowsise_2d_array(arr,row,col);

    return 0;
}




