#include <iostream>
using namespace std;
int gcd(int x, int y) {
    return x % y == 0 ? y : gcd(y, x % y);
}
int main(void) {
    int t, a, b, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        n = gcd(a, b);
        cout << a * b / n << ' ' << n << "\n";
    }
    return 0;
}