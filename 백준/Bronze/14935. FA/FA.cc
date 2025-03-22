#include <iostream>
using namespace std;
int main(void) {
    int len;
    string st, t = "";
    cin >> st;
    t = to_string((st[0] - 48) * st.size());
    len = t.size();
    while (t != to_string((t[0] - 48) * len)) {
        t = to_string((t[0] - 48) * len);
        len = t.size();
    }
    cout << (t == to_string((t[0] - 48) * len) ? "FA" : "NFA");
    return 0;
}