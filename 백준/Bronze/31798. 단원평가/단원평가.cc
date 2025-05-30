#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
    int a, b, c, rlt;
    cin >> a >> b >> c;
    if (a == 0)
        rlt = pow(c, 2) - b;
    else if (b == 0)
        rlt = pow(c, 2) - a;
    else if (c == 0)
        rlt = pow(a + b, 0.5);
    cout << rlt;
    return 0;
}