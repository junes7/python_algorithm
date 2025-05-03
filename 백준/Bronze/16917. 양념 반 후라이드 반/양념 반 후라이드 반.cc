#include <iostream>
using namespace std;
int main(void) {
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    if (a + b < 2 * c) {
        cout << a * x + b * y;
    } else {
        cout << 2 * c * min(x, y) + min(a, 2 * c) * max(0, x - y) + min(b, 2 * c) * max(0, y - x);
    }
    return 0;
}