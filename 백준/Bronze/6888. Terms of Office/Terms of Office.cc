#include <iostream>
using namespace std;
int gcd(int x, int y) {
    return x % y == 0 ? y : gcd(y, x % y);
}
int main(void) {
    int x, y, gcdn, lcm;
    cin >> x;
    cin >> y;
    string st = "All positions change in year ";
    gcdn = gcd(4, 2);
    lcm = 4 * 2 * 3 * 5 / gcdn;
    while (true) {
        cout << st + to_string(x) << "\n";
        x += lcm;
        if (x > y) break;
    }
    return 0;
}