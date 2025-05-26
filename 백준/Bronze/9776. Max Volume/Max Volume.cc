#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    double r, h, pi = 3.14159;
    char c;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    vector<double> vol(n);
    for (int i = 0; i < n; i++) {
        cin >> c;
        if (c == 'C' || c == 'L') {
            cin >> r >> h;
            vol[i] = c == 'C' ? (1 / 3.0) * pi * pow(r, 2) * h : pi * pow(r, 2) * h;
        } else {
            cin >> r;
            vol[i] = (4 / 3.0) * pi * pow(r, 3);
        }
    }
    sort(vol.begin(), vol.end(), greater<double>());
    cout << fixed;
    cout.precision(3);
    cout << vol[0];
    return 0;
}