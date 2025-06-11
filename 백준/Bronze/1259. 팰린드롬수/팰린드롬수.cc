#include <iostream>
using namespace std;
int main(void) {
    string st;
    bool flag;
    while (1) {
        cin >> st;
        if (st == "0") break;
        flag = true;
        for (int i = 0; i < st.size() / 2; i++) {
            if (st[i] != st[st.size() - 1 - i]) {
                flag = false;
                break;
            }
        }
        cout << (flag ? "yes" : "no") << "\n";
    }
    return 0;
}