#include <cmath>
#include <iostream>
using namespace std;

int main(void) {
    int n, t = 2;
    cin >> n;
    t = pow(2, n) + 1;
    t *= t;
    cout << t << endl;
    return 0;
}