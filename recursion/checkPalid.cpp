#include <iostream>
using namespace std;

// bool is_palindrome(string &str, int s, int e) {
//     while (s < e) {
//         if (str[s] == str[e]) {
//             s++;
//             e--;
//         } else {
//             return false;
//         }
//     }
//     return true;
// }



bool is_palindrome(string &str, int s, int e) {
        if(s>=e) return true;
        if (str[s] == str[e]) {
           return is_palindrome(str,s+1,e-1); 
        } else{
            return false;
        }
   
}

int main() {
    string str = "raccar";

    int s = 0;
    int e = str.length() - 1;

    bool ans = is_palindrome(str, s, e);

    if (ans) {
        cout << "Palindrome hai ji" << endl;
    } else {
        cout << "Palindrome ni hai ji" << endl;
    }

    return 0;
}
