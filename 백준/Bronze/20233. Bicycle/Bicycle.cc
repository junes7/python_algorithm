#include <iostream>
using namespace std;
int main(void) {
    int a, x, b, y, t;
    cin >> a;
    cin >> x;
    cin >> b;
    cin >> y;
    cin >> t;
    cout << (t - 30 > 0 ? a + (t - 30) * x * 21 : a) << ' ' << (t - 45 > 0 ? b + (t - 45) * y * 21 : b);
    return 0;
}