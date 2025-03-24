#include <iostream>
using namespace std;
int main(void) {
    int i = 0;
    string st, r = "";
    cin >> st;
    r += st[0];
    while (i < st.size() - 1) {
        i += st[i] - 65 + 1;
        r += st[i];
    }
    cout << r;
    return 0;
}