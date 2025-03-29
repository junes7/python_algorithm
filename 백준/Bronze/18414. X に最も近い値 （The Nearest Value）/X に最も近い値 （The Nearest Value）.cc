#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
    int x, l, r, minn, idx;
    cin >> x >> l >> r;
    minn = abs(x - l);
    idx = l;
    for (int i = l + 1; i < r + 1; i++) {
        if (minn > abs(x - i)) {
            minn = abs(x - i);
            idx = i;
        }
    }
    cout << idx;
    return 0;
}