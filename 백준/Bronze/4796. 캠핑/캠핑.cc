#include <iostream>
using namespace std;

int main(void) {
    int l, p, v, cnt = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while (1) {
        cin >> l >> p >> v;
        cnt += 1;
        if (l + p + v == 0)
            break;
        cout << "Case " << cnt << ": " << (v % p > l ? l * (v / p + 1) : l * (v / p) + v % p) << "\n";
    }
    return 0;
}