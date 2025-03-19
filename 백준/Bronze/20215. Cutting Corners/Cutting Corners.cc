#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
    int w, h;
    cin >> w >> h;
    cout << fixed;
    cout.precision(9);
    cout << w + h - sqrt(pow(w, 2) + pow(h, 2));
    return 0;
}