#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, m, rlt = 0, i = 0, cnt = 0;
    string st, t;
    cin >> n >> m >> st;
    while (i < m - 1) {
        t = st.substr(i, 3);
        if (t == "IOI") {
            i += 2;
            cnt += 1;
            if (cnt == n) {
                rlt += 1;
                cnt -= 1;
            }
        } else {
            i += 1;
            cnt = 0;
        }
    }
    cout << rlt;
    return 0;
}