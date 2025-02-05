#include <iostream>
#include <vector>
using namespace std;
vector<vector<long long>> multi(vector<vector<long long>> &a, vector<vector<long long>> &b, int n) {
    vector<vector<long long>> m(n, vector<long long>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++)
                m[i][j] += a[i][k] * b[k][j] % 1000;
        }
    }
    return m;
}
vector<vector<long long>> square(vector<vector<long long>> &x, long long exp, int n) {
    if (exp == 1)
        return x;
    vector<vector<long long>> temp = square(x, exp / 2, n);
    vector<vector<long long>> t = multi(temp, temp, n);
    return exp % 2 == 0 ? t : multi(t, x, n);
}
int main(void) {
    int n;
    long long b;
    cin >> n >> b;
    vector<vector<long long>> a(n, vector<long long>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    vector<vector<long long>> r = square(a, b, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << r[i][j] % 1000 << ' ';
        }
        cout << "\n";
    }
    return 0;
}