#include <iostream>
using namespace std;
int main(void) {
    int n, a = 1, b = 2, ans = 0;
    cin >> n;
    while (a != b) {
        if (b * b - a * a == n) {
            ans += 1;
            b += 1;
        } else if (b * b - a * a > n) {
            a += 1;
        } else {
            b += 1;
        }
    }
    cout << ans;
    return 0;
}