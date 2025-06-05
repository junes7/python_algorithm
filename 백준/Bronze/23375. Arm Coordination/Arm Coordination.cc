#include <iostream>
using namespace std;
int main(void) {
    int x, y, r;
    cin >> x >> y >> r;
    cout << x - r << ' ' << y + r << "\n";
    cout << x + r << ' ' << y + r << "\n";
    cout << x + r << ' ' << y - r << "\n";
    cout << x - r << ' ' << y - r << "\n";
    return 0;
}