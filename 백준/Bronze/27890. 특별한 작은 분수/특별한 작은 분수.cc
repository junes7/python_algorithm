#include <iostream>
using namespace std;
int main(void) {
    int x, n;
    cin >> x >> n;
    for (int i = 0; i < n; i++) {
        if (x % 2 == 0) {
            x = x / 2 ^ 6;
        } else {
            x = (x * 2) ^ 6;
        }
    }
    cout << x;
    return 0;
}