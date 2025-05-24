#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
    int n, x1, y1, f1, x2, y2, f2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> f1 >> x2 >> y2 >> f2;
        cout << f1 + f2 + abs(x2 - x1) + abs(y2 - y1) << "\n";
    }
    return 0;
}