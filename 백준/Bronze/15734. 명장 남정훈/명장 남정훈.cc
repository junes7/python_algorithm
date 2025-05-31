#include <iostream>
using namespace std;
int main(void) {
    int L, R, A, a, b, t, rlt;
    cin >> L >> R >> A;
    a = min(L, R), b = max(L, R);
    t = min(b - a, A);
    a += t;
    A -= t;
    rlt = a * 2 + (A ? A / 2 * 2 : 0);
    cout << rlt;
    return 0;
}