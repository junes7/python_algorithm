#include <cmath>
#include <iostream>
#define _USE_MATH_DEFINES
using namespace std;
int main(void) {
    double pi = M_PI;
    int a1, p1, r1, p2;
    cin >> a1 >> p1;
    cin >> r1 >> p2;
    cout << (a1 * p2 > pow(r1, 2) * pi * p1 ? "Slice of pizza" : "Whole pizza");
    return 0;
}