#include <iostream>
using namespace std;
int main(void) {
    int n, len;
    string st;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> st;
        len = st.size();
        cout << (st[len / 2 - 1] == st[len / 2] ? "Do-it" : "Do-it-Not") << "\n";
    }
    return 0;
}