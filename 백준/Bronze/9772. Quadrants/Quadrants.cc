#include <iostream>
using namespace std;
int main(void) {
    double x, y;
    while (cin >> x >> y) {
        if (x == 0 || y == 0)
            cout << "AXIS\n";
        else
            cout << (x > 0 ? (y > 0 ? "Q1" : "Q4") : (y > 0 ? "Q2" : "Q3")) << "\n";
    }
    return 0;
}