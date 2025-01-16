#include <iostream>
using namespace std;

int main(void) {
    int n, d = 2;
    cin >> n;
    while (n > 1) {
        if (n % d == 0) {
            cout << d << endl;
            n /= d;
        } else {
            d += 1;
        }
    }
    return 0;
}