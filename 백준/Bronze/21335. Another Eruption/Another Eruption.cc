#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
    double pi = M_PI;
    long long a;
    cin >> a;
    cout << fixed;
    cout.precision(6);
    cout << pow(a / pi, 0.5) * 2 * pi;
    return 0;
}