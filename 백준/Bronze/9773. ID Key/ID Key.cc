#include <iostream>
using namespace std;
int main(void) {
    int n;
    long long s;
    string st, t;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> st;
        s = 0, t = "";
        for (int j = 0; j < st.size(); j++)
            s += st[j] - 48;
        s += stoll(st.substr(st.size() - 3)) * 10;
        if (s < 1000)
            s += 1000;
        st = to_string(s);
        st = st.substr(st.size() - 4);
        cout << st << "\n";
    }
    return 0;
}