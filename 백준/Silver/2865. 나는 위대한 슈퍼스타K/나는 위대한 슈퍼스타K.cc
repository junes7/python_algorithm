#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, m, k, idx;
    double val, total = 0.0;
    cin >> n >> m >> k;
    vector<double> sing(n, 0.0);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> idx >> val;
            if (sing[idx - 1] < val)
                sing[idx - 1] = val;
        }
    }
    sort(sing.begin(), sing.end(), greater<double>());
    for (int i = 0; i < k; i++)
        total += sing[i];
    cout << fixed;
    cout.precision(1);
    cout << total;
    return 0;
}