#include <iostream>
using namespace std;
int main(void) {
    int t, n, m, cnt;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> m;
        cnt = 0;
        for (int j = 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if ((j * j + k * k + m) % (j * k) == 0)
                    cnt += 1;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}