#include <iostream>
using namespace std;
int main(void) {
    int l, w, a;
    while (1) {
        cin >> l >> w >> a;
        if (l == w && w == a && a == 0) break;
        if (w == 0) {
            cout << l << ' ' << a / l << ' ' << a << "\n";
        } else if (l == 0) {
            cout << a / w << ' ' << w << ' ' << a << "\n";
        } else {
            cout << l << ' ' << w << ' ' << l * w << "\n";
        }
    }
    return 0;
}