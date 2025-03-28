#include <iostream>
using namespace std;
int main(void) {
    int t, n, a, b;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> a >> b;
            cout << a + b << ' ' << a * b << "\n";
        }
    }
    return 0;
}