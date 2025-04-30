#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
    int m, n, s = 0, minn;
    cin >> m;
    cin >> n;
    minn = n;
    for (int i = m; i < n + 1; i++) {
        if (sqrt(i) == int(sqrt(i))) {
            if (minn > i) minn = i;
            s += i;
        }
    }
    if (s > 0) {
        cout << s << "\n";
        cout << minn << "\n";
    } else {
        cout << -1;
    }
    return 0;
}