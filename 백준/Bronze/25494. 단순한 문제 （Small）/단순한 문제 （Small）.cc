#include <iostream>
using namespace std;
int main(void) {
    int T, a, b, c, cnt;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> a >> b >> c;
        cnt = 0;
        for (int x = 0; x < a; x++) {
            for (int y = 0; y < b; y++) {
                for (int z = 0; z < c; z++) {
                    if ((x + 1) % (y + 1) == (y + 1) % (z + 1) && (y + 1) % (z + 1) == (z + 1) % (x + 1))
                        cnt += 1;
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}