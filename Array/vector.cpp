#include <iostream>
#include <vector>

using namespace std;

// Print function using a for loop
void print(vector<int> v) {
    cout << "Printing vector " << endl;
    int size = v.size();
    for (int i = 0; i < size; i++) {
        cout << v[i] << " "; // Alternatively, you can use v.at(i)
    }
    cout << endl;
}

// Print function using a range-based for loop
void print2(vector<int> v) {
    cout << "Printing vector method 2" << endl;
    for (auto it : v) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    print(v);  // Call print function
    print2(v); // Call print2 function

    /*
    // Additional vector operations (commented out)
    vector<char> v;
    v.push_back('a');
    v.push_back('b');
    v.push_back('c');
    v.push_back('d');

    cout << "Front element: " << v[0] << endl;
    cout << "Front element: " << v.front() << endl;
    cout << "End Element: " << v[v.size() - 1] << endl;
    cout << "End Element: " << v.back() << endl;

    vector<int> arr; // default with no data, 0 size
    vector<int> arr2(5, -1); // init with n size with specific data
    vector<int> arr3 = {1, 2, 3, 4, 5};
    vector<int> arr4{1, 2, 3, 4, 5};
    vector<int> arr5 = {1, 2, 3, 4, 5};
    vector<int> arr6(arr5);
    print(arr6);

    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int d;
        cin >> d;
        v.push_back(d);
    }
    print(v);

    v.clear();
    v.push_back(50);
    print(v);

    v.pop_back();
    print(v);
    */
}
