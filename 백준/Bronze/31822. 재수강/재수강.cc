#include <iostream>
using namespace std;
int main(void) {
    int n, cnt = 0;
    string t, st, sub_t, sub_st;
    cin >> t;
    cin >> n;
    sub_t = t.substr(0, 5);
    for (int i = 0; i < n; i++) {
        cin >> st;
        sub_st = st.substr(0, 5);
        if (sub_t == sub_st)
            cnt += 1;
    }
    cout << cnt;
    return 0;
}