#include <iostream>
using namespace std;
int main(void) {
    int t, cnt = 0;
    string st;
    cin >> st;
    while (st.size() > 1) {
        t = st[0] - 48;
        for (int i = 1; i < st.size(); i++)
            t *= st[i] - 48;
        st = to_string(t);
        cnt += 1;
    }
    cout << cnt;
    return 0;
}