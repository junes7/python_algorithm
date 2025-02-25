#include <iostream>
using namespace std;
int digit_sum(int num) {
    int total = 0;
    while (num > 0) {
        total += num % 10;
        num /= 10;
    }
    return total;
}
int main(void) {
    int n, rlt = 0, len;
    cin >> n;
    len = n - to_string(n).size() * 9;
    for (int i = 1 < len ? len : 1; i < n; i++) {
        if (i + digit_sum(i) == n) {
            rlt = i;
            break;
        }
    }
    cout << rlt;
    return 0;
}