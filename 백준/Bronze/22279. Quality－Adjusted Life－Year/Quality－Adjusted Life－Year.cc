#include <iostream>
using namespace std;
int main(void) {
    int n;
    double q, y, rlt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> q >> y;
        rlt += q * y;
    }
    cout << fixed;
    cout.precision(3);
    cout << rlt;
    return 0;
}