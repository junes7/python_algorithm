#include <iostream>
using namespace std;
int main(void) {
    int a, b, c, prize;
    cin >> a >> b >> c;
    if (a == b && b == c) {
        prize = 10000 + a * 1000;
    } else if (a == b || a == c || b == c) {
        if (a == b || a == c) {
            prize = 1000 + a * 100;
        } else {
            prize = 1000 + b * 100;
        }
    } else {
        prize = max(max(a, c), max(b, c)) * 100;
    }
    cout << prize;
    return 0;
}