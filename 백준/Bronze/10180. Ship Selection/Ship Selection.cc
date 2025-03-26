#include <iostream>
using namespace std;
int main(void) {
    int T, N, D, v, f, c, cnt;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N >> D;
        cnt = 0;
        for (int j = 0; j < N; j++) {
            cin >> v >> f >> c;
            if (v * f / c >= D)
                cnt += 1;
        }
        cout << cnt << "\n";
    }
    return 0;
}