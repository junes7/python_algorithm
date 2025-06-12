#include <iostream>
using namespace std;
int main(void) {
    int i = 0, cnt = 0;
    string st, tar, t;
    getline(cin, st);
    getline(cin, tar);
    if (tar.size() <= st.size()) {
        while (i < st.size() - tar.size() + 1) {
            t = st.substr(i, tar.size());
            if (t == tar) {
                i += tar.size();
                cnt += 1;
            } else {
                i += 1;
            }
        }
    } else {
        cnt = 0;
    }
    cout << cnt << "\n";
    return 0;
}