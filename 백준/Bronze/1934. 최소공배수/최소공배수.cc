#include <iostream>
using namespace std;

int gcd(int x, int y) {
    return x % y == 0 ? y : gcd(y, x % y);
}

int main(void) {
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << a * b / gcd(a, b) << endl;
    }
    return 0;
}