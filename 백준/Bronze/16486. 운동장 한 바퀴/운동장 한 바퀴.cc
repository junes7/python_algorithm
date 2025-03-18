#include <iostream>
using namespace std;
int main(void) {
    int d1, d2;
    float pi = 3.141592;
    cin >> d1;
    cin >> d2;
    cout << fixed;
    cout.precision(6);
    cout << 2 * d1 + 2 * pi * d2;
    return 0;
}