#include <iostream>
using namespace std;
int main(void) {
    int N, M, elem, s;
    while (cin >> N >> M) {
        if (N == 0 && M == 0) break;
        s = 0;
        for (int i = 0; i < N; i++) {
            cin >> elem;
            s += elem >= M / N ? M / N : elem;
        }
        cout << s << "\n";
    }
    return 0;
}