#include <iostream>
using namespace std;
int main(void) {
    int k;
    double s;
    cin >> k;
    s = 25 + k * 0.01;
    cout << fixed;
    cout.precision(2);
    cout << (s > 2000 ? 2000 : (s < 100 ? 100 : s));
    return 0;
}