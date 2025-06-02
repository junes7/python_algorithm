#include <iostream>
using namespace std;
int main(void) {
    int a, b, x, y, t1, rlt;
    cin >> a >> b >> x >> y;
    if (a > b) {
        t1 = a;
        a = b;
        b = t1;
    }
    if (x > y) {
        t1 = x;
        x = y;
        y = t1;
    }
    rlt = min(b - a, abs(x - a) + abs(y - b));
    cout << rlt;
    return 0;
}