#include <iostream>
using namespace std;
int main(void) {
    int len, und_cnt = 0, colo_cnt = 0;
    string st;
    cin >> st;
    len = st.size();
    for (int i = 0; i < len; i++) {
        if (st[i] == ':')
            colo_cnt += 1;
        else if (st[i] == '_')
            und_cnt += 1;
    }
    cout << len + colo_cnt + und_cnt * 5;
    return 0;
}