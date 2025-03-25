#include <iostream>
using namespace std;
int main(void) {
    int n, c, p;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c >> p;
        cout << c << ' ' << p << "\n";
        cout << (c == 1 ? p : p + (c - 1) * (p - 2)) << "\n";
    }
    return 0;
}