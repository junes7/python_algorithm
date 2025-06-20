#include <iostream>
using namespace std;
int main(void) {
    int l, n, t, x, rem;
    string st;
    cin >> l;
    for (int i = 0; i < l; i++) {
        cin >> n;
        x = 2;
        while (1) {
            t = n - x * (x + 1) / 2;
            if (t < 0) {
                st = "";
                break;
            }
            if (t % x == 0) {
                rem = t / x;
                st = to_string(n) + " = ";
                for (int i = 1; i < x; i++)
                    st += to_string(i + rem) + " + ";
                st += to_string(x + rem);
                break;
            }
            x += 1;
        }
        cout << (st.size() == 0 ? "IMPOSSIBLE" : st) << "\n";
    }
    return 0;
}