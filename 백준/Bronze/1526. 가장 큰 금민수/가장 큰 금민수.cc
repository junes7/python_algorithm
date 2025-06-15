#include <iostream>
using namespace std;
int main(void) {
    string st;
    bool flag;
    int n;
    cin >> n;
    for (int i = n; i > 3; i--) {
        st = to_string(i);
        flag = true;
        for (int j = 0; j < st.size(); j++) {
            if (st[j] != '4' && st[j] != '7') {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << i;
            break;
        }
    }
    return 0;
}