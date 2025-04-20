#include <iostream>
using namespace std;
int main(void) {
    int n, w, l, h, a, m, x, y, total;
    while (true) {
        cin >> n >> w >> l >> h >> a >> m;
        if (n == 0) break;
        total = w * h * 2 + h * l * 2 + w * l;
        for (int i = 0; i < m; i++) {
            cin >> x >> y;
            total -= x * y;
        }
        cout << total * n / a + (total * n % a == 0 ? 0 : 1) << "\n";
    }
    return 0;
}