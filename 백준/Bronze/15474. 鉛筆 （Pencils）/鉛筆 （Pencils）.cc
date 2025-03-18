#include <iostream>
using namespace std;
int main(void) {
    int n, a, b, c, d, r1, r2;
    cin >> n >> a >> b >> c >> d;
    r1 = (n / a + (n % a == 0 ? 0 : 1)) * b;
    r2 = (n / c + (n % c == 0 ? 0 : 1)) * d;
    cout << (r1 < r2 ? r1 : r2);
    return 0;
}