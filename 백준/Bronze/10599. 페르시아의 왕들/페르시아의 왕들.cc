#include <iostream>
using namespace std;
int main(void) {
    int a, b, c, d;
    while (1) {
        cin >> a >> b >> c >> d;
        if (a == b && b == c && c == d && d == 0) break;
        cout << c - b << ' ' << d - a << "\n";
    }
    return 0;
}