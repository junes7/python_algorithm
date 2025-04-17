#include <iostream>
using namespace std;
int main(void) {
    string st, t;
    getline(cin, st);
    t = st[0];
    for (int i = 1; i < st.size(); i++) {
        if (st[i] == st[i - 1])
            continue;
        t += st[i];
    }
    cout << t;
    return 0;
}