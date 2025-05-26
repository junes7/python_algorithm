#include <iostream>
using namespace std;
int main(void) {
    double C, w, l, total = 0;
    int n;
    cin >> C;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> w >> l;
        total += w * l * C;
    }
    cout << fixed;
    cout.precision(7);
    cout << total;
    return 0;
}