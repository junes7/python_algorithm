#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
    float n;
    while (cin >> n) {
        if (n == 0) break;
        n = 1 + n + pow(n, 2) + pow(n, 3) + pow(n, 4);
        cout << fixed;
        cout.precision(2);
        cout << n << "\n";
    }
    return 0;
}