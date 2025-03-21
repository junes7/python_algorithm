#include <iostream>
using namespace std;
int main(void) {
    int n, i, j;
    string st, t;
    cin >> n;
    for (int l = 0; l < n; l++) {
        cin >> st >> i >> j;
        t = "";
        for (int k = 0; k < st.size(); k++) {
            if (i <= k && k < j)
                continue;
            t += st[k];
        }
        cout << t << "\n";
    }
    return 0;
}