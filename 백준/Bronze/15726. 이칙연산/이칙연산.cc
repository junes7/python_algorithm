#include <iostream>
using namespace std;
int main(void) {
    int A, B, C, r1, r2;
    cin >> A >> B >> C;
    r1 = 1.0 * A * B / C;
    r2 = 1.0 * A / B * C;
    cout << (r1 > r2 ? int(r1) : int(r2));
    return 0;
}