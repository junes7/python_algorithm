#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
    double l, r, t, dist, mph, pi = M_PI;
    int cnt = 1;
    while (true) {
        cin >> l >> r >> t;
        if (r == 0) break;
        dist = pi * l * r / 12 / 5280;
        mph = dist / (t / 3600);
        cout << fixed;
        cout.precision(2);
        cout << "Trip #" << cnt++ << ": " << dist << ' ' << mph << "\n";
    }
    return 0;
}