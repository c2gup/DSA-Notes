#include <iostream>
using namespace std;

// Example demonstrating various C++ concepts and practices

// Global variable (GB) - Generally considered bad practice due to potential for unexpected modifications.
int age = 25;

int main() {
    // Example 1: Bitwise OR operation
    // int a = 5;
    // int b = 10;
    // cout << (a | b) << endl; // Outputs: 15

    // Example 2: Bitwise NOT operation on boolean
    // bool num = 1;
    // cout << ~num << endl;   // Outputs: -2 (due to type conversion)
    // cout << (~num) << endl; // Outputs: -2
    // cout << ~(num) << endl; // Outputs: -2

    // Example 3: Bitwise XOR operation
    // int a = 5;
    // int b = -5;
    // cout << (a ^ b) << endl; // Outputs: -2

    // Example 4: Left shift operation
    // int a = 7;
    // int ans = (a << 2);
    // cout << ans << endl; // Outputs: 28

    // Example 5: Right shift on unsigned integer
    // unsigned int n = -100;
    // cout << (n >> 1) << endl; // Outputs: large positive number due to unsigned interpretation

    // Example 6: Left shift with negative number (undefined behavior)
    // int n = 10;
    // cout << (n << -1) << endl; // Undefined behavior

    // Example 7: Pre-increment and post-increment
    // int a = 21;
    // cout << ++a << endl;  // Outputs: 22
    // cout << a++ << endl;  // Outputs: 22, then a becomes 23
    // cout << a << endl;    // Outputs: 23

    // Example 8: Increment operations in expressions
    // int a = 10;
    // cout << (++a) * 10 << endl;  // Outputs: 110
    // cout << (a++) * 10 << endl;  // Outputs: 110, then a becomes 12
    // cout << a << endl;           // Outputs: 12

    // Example 9: Complex increment expressions
    // int a = 10;
    // cout << ((a++) * (++a)) << endl; // Outputs: 132 (implementation-dependent)

    // Example 10: Break in a loop
    // for(int i = 0; i < 5; i++) {
    //     cout << i << endl;
    //     if (i == 3) break; // Loop stops when i equals 3
    // }

    // Example 11: Continue in a loop
    // for (int i = 0; i <= 5; i++) {
    //     cout << "Hello Jee" << endl;
    //     cout << "Kaise ho saare" << endl;
    //     continue; // Continues to the next iteration of the loop
    // }

    // Example 12: Variable scope demonstration
    // int a = 5;
    // a = 25;
    // cout << a << endl; // Outputs: 25

    // Example 13: Loop scope demonstration
    // int andy = 10;
    // for (int i = 0; i < 5; i++) {
    //     cout << i << endl;
    // }
    // cout << "or bhai i kya value h teri" << i << endl; // Error: i is not in scope

    // Example 14: Nested scope demonstration
    // if (true) {
    //     int a = 25;
    //     cout << a << endl; // Outputs: 25
    // }
    // cout << a << endl; // Error: a is not in scope

    // Example 15: Nested if statements
    // int a = 101;
    // if (true) {
    //     cout << "inside if number 1" << endl;
    //     if (true) {
    //         cout << "inside if number 2" << endl;
    //         cout << a << endl; // Outputs: 101
    //     }
    // }

    // Global variable usage
    cout << age << endl; // Outputs: 25

    return 0;
}

