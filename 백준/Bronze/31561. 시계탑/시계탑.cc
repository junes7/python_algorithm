#include <iostream>
using namespace std;
int main(void) {
    int m;
    cin >> m;
    cout << fixed;
    cout.precision(1);
    cout << (m - 30 > 0 ? 30 / 2 + (m - 30) * 3 / 2.0 : m / 2.0);
    return 0;
}