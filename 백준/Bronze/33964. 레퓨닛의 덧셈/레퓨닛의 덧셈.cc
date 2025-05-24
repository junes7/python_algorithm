#include <iostream>
using namespace std;
int main(void) {
    int x, y, m, t = 0;
    cin >> x >> y;
    if (x < 10) {
        m = 1;
        for (int i = 0; i < x; i++) {
            t += 1 * m;
            m *= 10;
        }
    }
    if (y < 10) {
        m = 1;
        for (int i = 0; i < y; i++) {
            t += 1 * m;
            m *= 10;
        }
    }
    cout << t;
    return 0;
}