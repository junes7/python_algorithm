#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
    int a, b, n, minn, frq;
    cin >> a >> b;
    cin >> n;
    minn = abs(b - a);
    for (int i = 0; i < n; i++) {
        cin >> frq;
        minn = min(abs(b - frq) + 1, minn);
    }
    cout << minn;
    return 0;
}