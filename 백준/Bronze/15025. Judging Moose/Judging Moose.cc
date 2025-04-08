#include <iostream>
using namespace std;
int main(void) {
    int l, r;
    cin >> l >> r;
    if (l == 0 && r == 0) {
        cout << "Not a moose";
    } else {
        if (l == r)
            cout << "Even " << l * 2;
        else
            cout << "Odd " << (l > r ? l * 2 : r * 2);
    }
    return 0;
}