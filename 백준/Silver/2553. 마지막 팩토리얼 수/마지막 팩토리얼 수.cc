#include <iostream>
using namespace std;
int main(void) {
    string st;
    long long f = 1, n;
    cin >> n;
    for (long long i = 2; i < n + 1; i++) {
        f *= i;
        while (f % 10 == 0)
            f /= 10;
        f %= 1000000000000LL;
    }
    cout << f % 10;
    return 0;
}