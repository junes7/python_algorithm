#include <iostream>
using namespace std;
int main(void) {
    int cnt = 0;
    string st, t;
    cin >> st;
    for (int i = 0; i < st.size() - 4 + 1; i++) {
        t = st.substr(i, 4);
        if (t == "DKSH")
            cnt += 1;
    }
    cout << cnt;
    return 0;
}