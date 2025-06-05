#include <iostream>
using namespace std;
int main(void) {
    int p, k, n;
    cin >> p;
    for (int i = 0; i < p; i++) {
        cin >> k >> n;
        cout << k << ' ' << n * (n + 1) / 2 << ' ' << n * n << ' ' << n * (n + 1) << "\n";
    }
    return 0;
}