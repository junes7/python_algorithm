#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, m, cnt = 0;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] <= b[j])
                cnt += 1;
        }
    }
    cout << cnt;
    return 0;
}