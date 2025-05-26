#include <iostream>
using namespace std;
int main(void) {
    string st, t, d;
    int s;
    while (1) {
        cin >> st;
        s = 0;
        if (st == "99999") break;
        t = st.substr(0, 2);
        for (int i = 0; i < t.size(); i++)
            s += t[i] - 48;
        if (s != 0)
            d = s % 2 == 0 ? "right" : "left";
        cout << d << ' ' << st.substr(2) << "\n";
    }
    return 0;
}