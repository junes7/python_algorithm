#include <iostream>
using namespace std;
int main(void) {
    int a, b, k, x, cnt = 0;
    cin >> a >> b;
    cin >> k >> x;
    for (int i = k - x; i < k + x + 1; i++) {
        if (a <= i && i <= b)
            cnt += 1;
    }
    cout << (cnt > 0 ? to_string(cnt) : "IMPOSSIBLE");
    return 0;
}