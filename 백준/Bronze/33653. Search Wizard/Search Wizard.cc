#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main(void) {
    int m, l, cnt = 0;
    string w, st, t;
    cin >> w;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> st;
        l = st.size() - w.size() + 1;
        for (int j = 0; j < l; j++) {
            t = st.substr(j, w.size());
            if (t == w) {
                cnt += 1;
            }
        }
    }
    cout << cnt;
    return 0;
}