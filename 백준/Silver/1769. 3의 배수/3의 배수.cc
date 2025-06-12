#include <iostream>
using namespace std;
int main(void) {
    string st;
    int total, cnt = 0;
    cin >> st;
    while (st.size() > 1) {
        cnt += 1;
        total = 0;
        for (int i = 0; i < st.size(); i++) {
            total += st[i] - 48;
        }
        st = to_string(total);
    }
    cout << cnt << "\n";
    cout << (stoi(st) % 3 == 0 ? "YES" : "NO") << "\n";
    return 0;
}