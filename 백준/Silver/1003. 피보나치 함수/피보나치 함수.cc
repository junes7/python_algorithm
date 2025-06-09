#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t, n, a, b, c;
    cin >> t;
    for (int i = 0; i < t; i++) {
        a = 1, b = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            c = a;
            a = b;
            b = c + b;
        }
        cout << a << ' ' << b << "\n";
    }
    return 0;
}