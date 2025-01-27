#include <iostream>
using namespace std;

int gcd(int x, int y) {
    return x % y == 0 ? y : gcd(y, x % y);
}

int main(void) {
    int a, b, gcdn;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b;
    gcdn = gcd(a, b);
    cout << gcdn << "\n";
    cout << a * b / gcdn;
    return 0;
}