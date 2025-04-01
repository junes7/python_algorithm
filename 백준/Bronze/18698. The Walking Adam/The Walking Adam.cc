#include <iostream>
using namespace std;
int main(void) {
    int n, cnt;
    cin >> n;
    string st;
    for (int i = 0; i < n; i++) {
        cnt = 0;
        cin >> st;
        for (int j = 0; j < st.size(); j++) {
            if (st[j] == 'D') break;
            cnt += 1;
        }
        cout << cnt << "\n";
    }
    return 0;
}