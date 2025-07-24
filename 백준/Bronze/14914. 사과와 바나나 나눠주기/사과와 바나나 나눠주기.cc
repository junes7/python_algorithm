#include <iostream>
using namespace std;
int gcd(int x, int y) {
    return x % y == 0 ? y : gcd(y, x % y);
}
int main(void) {
    int a, b, gcdn;
    cin >> a >> b;
    gcdn = gcd(a, b);
    for (int i = 1; i < gcdn + 1; i++) {
        if (gcdn % i == 0) {
            cout << i << ' ' << a / i << ' ' << b / i << "\n";
        }
    }
    return 0;
}