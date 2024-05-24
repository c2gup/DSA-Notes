[Question link](https://leetcode.com/problems/reverse-integer/)

# Integer Reverse Solutions

This repository contains two solutions to reverse an integer in C++. The key difference between the two solutions lies in their handling of negative numbers.

## Solution 1: Handling Both Positive and Negative Numbers

This solution works for both positive and negative integers.
###
# Integer Reverse Solutions

This repository contains two solutions to reverse an integer in C++. The key difference between the two solutions lies in their handling of negative numbers.

## Solution 1: Handling Both Positive and Negative Numbers

### Code and Explanation

```cpp
class Solution {
public:
    int reverse(int x) {
        int ans = 0;  // Initialize ans to 0. This will store the reversed number.
        while(x != 0){  // Loop until x is 0.
            int rem = x % 10;  // Extract the last digit of x using x % 10.
            x = x / 10;  // Remove the last digit from x using x / 10.
            if(ans > INT_MAX / 10 || ans < INT_MIN / 10){  // Check if multiplying ans by 10 would cause overflow. If it does, return 0.
                return 0;
            }
            ans = ans * 10 + rem;  // Add the extracted digit to ans by ans = ans * 10 + rem.
        }
        return ans;  // After the loop completes, ans contains the reversed integer.
    }
};
###

### Dry Run

Example: x = -123

Initial x: -123
Iteration 1:
    rem = x % 10 = -3
    x = x / 10 = -12
    ans = ans * 10 + rem = -3
Iteration 2:
    rem = x % 10 = -2
    x = x / 10 = -1
    ans = ans * 10 + rem = -32
Iteration 3:
    rem = x % 10 = -1
    x = x / 10 = 0
    ans = ans * 10 + rem = -321
Return ans = -321

## Solution 2: Handling Only Positive Numbers

This solution only works for positive integers. If x is negative, the function will return 0 immediately.

class Solution {
public:
    int reverse(int x) {
        int ans = 0;  // Initialize ans to 0. This will store the reversed number.
        while(x > 0){  // Loop until x is positive.
            int rem = x % 10;  // Extract the last digit of x using x % 10.
            x = x / 10;  // Remove the last digit from x using x / 10.
            if(ans > INT_MAX / 10 || ans < INT_MIN / 10){  // Check if multiplying ans by 10 would cause overflow. If it does, return 0.
                return 0;
            }
            ans = ans * 10 + rem;  // Add the extracted digit to ans by ans = ans * 10 + rem.
        }
        return ans;  // After the loop completes, ans contains the reversed integer.
    }
};


### Dry Run

Example: x = 123

Initial x: 123
Iteration 1:
    rem = x % 10 = 3
    x = x / 10 = 12
    ans = ans * 10 + rem = 3
Iteration 2:
    rem = x % 10 = 2
    x = x / 10 = 1
    ans = ans * 10 + rem = 32
Iteration 3:
    rem = x % 10 = 1
    x = x / 10 = 0
    ans = ans * 10 + rem = 321
Return ans = 321

Example: x = -123

Initial x: -123
x is not greater than 0, so the loop does not execute
Return ans = 0

## Conclusion

- **Solution 1**: Use this if you need to reverse both positive and negative integers.
- **Solution 2**: Use this if you only need to handle positive integers.

Both solutions include overflow checks to ensure the reversed number fits within the 32-bit signed integer range.



