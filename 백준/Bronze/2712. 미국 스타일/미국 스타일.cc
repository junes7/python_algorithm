#include <iostream>
using namespace std;
int main(void) {
    int t;
    double n;
    string st;
    cin >> t;
    cout << fixed;
    cout.precision(4);
    for (int i = 0; i < t; i++) {
        cin >> n >> st;
        if (st == "kg") {
            cout << n * 2.2046 << " lb\n";
        } else if (st == "lb") {
            cout << n * 0.4536 << " kg\n";
        } else if (st == "l") {
            cout << n * 0.2642 << " g\n";
        } else {
            cout << n * 3.7854 << " l\n";
        }
    }
    return 0;
}