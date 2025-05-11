#include <iostream>
using namespace std;
int main(void) {
    int t, n, s, p, q;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> s;
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> p >> q;
            s += p * q;
        }
        cout << s << "\n";
    }
    return 0;
}