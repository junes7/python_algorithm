#include <iostream>
using namespace std;
int main(void) {
    int P, C;
    cin >> P;
    cin >> C;
    cout << P * 50 - C * 10 + (P > C ? 500 : 0);
    return 0;
}