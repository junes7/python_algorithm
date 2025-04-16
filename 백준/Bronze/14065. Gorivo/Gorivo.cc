#include <iostream>
using namespace std;
int main(void) {
    double x, rlt;
    cin >> x;
    rlt = 100.0 / ((1.609344 / 3.785411784) * x);
    cout << fixed;
    cout.precision(6);
    cout << rlt;
    return 0;
}