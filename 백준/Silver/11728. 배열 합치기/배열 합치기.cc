#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, m, idx = 0;
    cin >> n >> m;
    vector<int> a(n), b(m), t(n + m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        t[idx++] = a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        t[idx++] = b[i];
    }
    sort(t.begin(), t.end(), less<int>());
    for (int i = 0; i < n + m; i++)
        cout << t[i] << ' ';
    return 0;
}