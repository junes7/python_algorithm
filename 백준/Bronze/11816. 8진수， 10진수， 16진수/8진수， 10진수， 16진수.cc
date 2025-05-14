#include <iostream>
using namespace std;
int main(void) {
    int len, m = 1, total = 0;
    string st;
    cin >> st;
    len = st.size() - 1;
    if (st[1] == 'x') {
        for (int i = len; i > 1; i--) {
            total += (st[i] - (isalpha(st[i]) ? 87 : 48)) * m;
            m *= 16;
        }
    } else {
        if (st[0] == '0') {
            for (int i = len; i > 0; i--) {
                total += (st[i] - 48) * m;
                m *= 8;
            }
        } else
            total = stoi(st);
    }
    cout << total;
    return 0;
}