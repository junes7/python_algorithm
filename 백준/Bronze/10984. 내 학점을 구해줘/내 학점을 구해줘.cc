#include <iostream>
using namespace std;
int main(void) {
    int t, n, cre, c;
    double g, total;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cre = 0, total = 0.0;
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> c >> g;
            cre += c;
            total += c * g;
        }
        cout << cre << ' ';
        cout << fixed;
        cout.precision(1);
        cout << total / cre << "\n";
    }
    return 0;
}