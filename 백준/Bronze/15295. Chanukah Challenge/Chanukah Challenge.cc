#include <iostream>
using namespace std;
int main(void) {
    int p, k, n, s;
    cin >> p;
    for (int i = 0; i < p; i++) {
        s = 0;
        cin >> k >> n;
        for (int j = 1; j < n + 1; j++) {
            s += j + 1;
        }
        cout << k << ' ' << s << "\n";
    }
    return 0;
}