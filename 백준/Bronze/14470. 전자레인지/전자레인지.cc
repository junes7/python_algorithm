#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
    int a, b, c, d, e;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cout << (a < 0 ? abs(a) * c + d + b * e : (b - a) * e);
    return 0;
}