#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
    int p = 1, q = 1;
    double k;
    cin >> k;
    while (abs((double)p / q - k) > pow(10, -6)) {
        if ((double)p / q > k)
            q += 1;
        else
            p += 1;
    }
    cout << "YES" << "\n";
    cout << p << ' ' << q;
    return 0;
}