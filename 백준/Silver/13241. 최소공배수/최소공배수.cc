#include <iostream>
using namespace std;
long long gcd(long long x, long long y) {
    return x % y == 0 ? y : gcd(y, x % y);
}
int main(void) {
    long long a, b;
    cin >> a >> b;
    cout << a * b / gcd(a, b);
    return 0;
}