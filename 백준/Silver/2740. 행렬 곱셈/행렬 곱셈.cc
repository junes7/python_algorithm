#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, m, k, s;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    cin >> m >> k;
    vector<vector<int>> b(m, vector<int>(k, 0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++)
            cin >> b[i][j];
    }
    vector<vector<int>> r(n, vector<int>(k, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            s = 0;
            for (int l = 0; l < m; l++)
                s += a[i][l] * b[l][j];
            r[i][j] = s;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << r[i][j] << ' ';
        }
        cout << "\n";
    }
    return 0;
}