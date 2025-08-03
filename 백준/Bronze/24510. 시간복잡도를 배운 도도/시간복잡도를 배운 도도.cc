#include <iostream>
using namespace std;
int main(void) {
    int n, len, maxn = 0, cnt;
    string st;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> st;
        cnt = 0, len = st.size();
        if (len >= 5) {
            for (int j = 0; j < st.size() - 4; j++) {
                if (st.substr(j, 5) == "while")
                    cnt += 1;
            }
        }
        if (len >= 3) {
            for (int j = 0; j < st.size() - 2; j++) {
                if (st.substr(j, 3) == "for")
                    cnt += 1;
            }
        }
        if (maxn < cnt)
            maxn = cnt;
    }
    cout << maxn;
    return 0;
}