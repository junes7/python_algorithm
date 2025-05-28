#include <iostream>
using namespace std;
int main(void) {
    int p, n;
    double d, a, b, f;
    cin >> p;
    for (int i = 0; i < p; i++) {
        cin >> n >> d >> a >> b >> f;
        cout << fixed;
        cout.precision(6);
        cout << n << ' ' << d / (a + b) * f << "\n";
    }
    return 0;
}