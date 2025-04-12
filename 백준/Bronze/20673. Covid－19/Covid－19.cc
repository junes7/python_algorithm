#include <iostream>
using namespace std;
int main(void) {
    int p, q;
    cin >> p;
    cin >> q;
    if (p <= 50 && q <= 10) {
        cout << "White";
    } else if (q > 30) {
        cout << "Red";
    } else {
        cout << "Yellow";
    }
    return 0;
}