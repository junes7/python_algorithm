#include <iostream>
using namespace std;
int main(void) {
    int x, y, n;
    double price;
    cin >> x >> y;
    price = x * 1000.0 / y;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        if (price > x * 1000.0 / y)
            price = x * 1000.0 / y;
    }
    cout << fixed;
    cout.precision(2);
    cout << price;
    return 0;
}