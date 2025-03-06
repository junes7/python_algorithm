#include <iostream>
using namespace std;
int main(void) {
    int T, F, S, P, C;
    for (int i = 0; i < 2; i++) {
        cin >> T >> F >> S >> P >> C;
        cout << 6 * T + 3 * F + 2 * S + 1 * P + 2 * C << ' ';
    }
    return 0;
}