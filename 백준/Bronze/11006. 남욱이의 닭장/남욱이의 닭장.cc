#include <iostream>
using namespace std;
int main(void) {
    int t, n, m, rem;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> m;
        rem = m * 2 - n;
        cout << rem << ' ' << m - rem << "\n";
    }
    return 0;
}