#include <iostream>
using namespace std;
int main(void) {
    int n, m, cnt, s = 0;
    string st;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> st;
        cnt = 0;
        for (int j = 0; j < m; j++) {
            if (st[j] == 'O')
                cnt += 1;
        }
        if (cnt >= m / 2 + 1) s += 1;
    }
    cout << s;
    return 0;
}