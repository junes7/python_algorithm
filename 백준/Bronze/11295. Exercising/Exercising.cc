#include <iostream>
using namespace std;
int main(void) {
    int L, n, walk, cnt = 1;
    while (1) {
        cin >> L;
        if (L == 0) break;
        cin >> n;
        cout << "User " << cnt++ << "\n";
        for (int i = 0; i < n; i++) {
            cin >> walk;
            cout << fixed;
            cout.precision(5);
            cout << walk * L / 100000.0 << "\n";
        }
    }
    return 0;
}