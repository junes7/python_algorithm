#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t, n, m, cnt;
    cin >> t;
    for (int l = 0; l < t; l++) {
        cin >> n >> m;
        cnt = 0;
        vector<int> x(n), y(m);
        for (int i = 0; i < n; i++)
            cin >> x[i];
        for (int j = 0; j < m; j++)
            cin >> y[j];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                for (int k = 0; k < 101; k++) {
                    if (x[i] == k && k == y[j]) {
                        cnt += 1;
                    }
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}