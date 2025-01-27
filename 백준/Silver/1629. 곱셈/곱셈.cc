#include <iostream>
using namespace std;

int main(void) {
    long a, b, c, res = 1;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b >> c;
    a %= c;
    while (b > 0) {
        if (b % 2 == 1)
            res = (res * a) % c;
        b /= 2;
        a = (a * a) % c;
    }
    cout << res;
    return 0;
}