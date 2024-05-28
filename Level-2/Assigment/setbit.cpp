#include <iostream>

using namespace std;

int setbit(int n) {
    int count = 0;
    while (n) {
        int bit = n % 2;
        n /= 2;
        if (bit == 1) {
            count++;
        }
    }
    return count;
}

int totalbit(int m) {
    int ans = 0;
    for (int i = 0; i <= m; i++) {
        ans += setbit(i);
    }
    return ans;
}

int main() {
    int ans = totalbit(5);
    cout << ans << endl;

    return 0;
}

