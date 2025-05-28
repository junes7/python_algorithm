#include <iostream>
using namespace std;
int main(void) {
    int p, n, m;
    cin >> p;
    for (int i = 0; i < p; i++) {
        cin >> n >> m;
        cout << (n >= 12 && m >= 4 ? 11 * m + 4 : -1) << "\n";
    }
    return 0;
}