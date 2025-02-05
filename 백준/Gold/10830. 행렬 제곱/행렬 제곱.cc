#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> multi(vector<vector<int>> &a, vector<vector<int>> &b, int n) {
    vector<vector<int>> m(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++)
                m[i][j] += a[i][k] * b[k][j] % 1000;
        }
    }
    return m;
}
vector<vector<int>> square(vector<vector<int>> &x, long long exp, int n) {
    if (exp == 1)
        return x;
    vector<vector<int>> temp = square(x, exp / 2, n);
    vector<vector<int>> t = multi(temp, temp, n);
    return exp % 2 == 0 ? t : multi(t, x, n);
}
int main(void) {
    int n;
    long long b;
    cin >> n >> b;
    vector<vector<int>> a(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    vector<vector<int>> r = square(a, b, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << r[i][j] % 1000 << ' ';
        }
        cout << "\n";
    }
    return 0;
}