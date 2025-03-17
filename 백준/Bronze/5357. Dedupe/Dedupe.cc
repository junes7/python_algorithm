#include <iostream>
using namespace std;
int main(void) {
    int n;
    string st, t;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> st;
        t = "";
        t += st[0];
        for (int j = 1; j < st.size(); j++)
            if (t[t.size() - 1] != st[j])
                t += st[j];
        cout << t << "\n";
    }
    return 0;
}