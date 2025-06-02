#include <iostream>
using namespace std;
int main(void) {
    int a, b, n, w, x, y, cnt = 0;
    cin >> a >> b >> n >> w;

    for (int i = 1; i < n; i++) {
        if (a * i + b * (n - i) == w) {
            x = i, y = n - i, cnt += 1;
        }
    }
    if (cnt == 1)
        cout << x << ' ' << y;
    else
        cout << -1;
    return 0;
}