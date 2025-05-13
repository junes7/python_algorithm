#include <iostream>
using namespace std;
int main(void) {
    int n, a, b, c, d, e;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c >> d >> e;
        cout << fixed;
        cout.precision(2);
        cout << "$" << a * 350.34 + b * 230.90 + c * 190.55 + d * 125.30 + e * 180.90 << "\n";
    }
    return 0;
}