#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
    int n, a1, p1, r1, p2;
    double pi = M_PI;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a1 >> p1;
        cin >> r1 >> p2;
        cout << (a1 / p1 < pi * pow(r1, 2) / p2 ? "Whole pizza" : "Slice of pizza") << "\n";
    }
    return 0;
}