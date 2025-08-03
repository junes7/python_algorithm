#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, len;
    string st;
    vector<string> rlt(2, "");
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> st;
        rlt[0] = "", rlt[1] = "", len = st.size();
        if (len % 2 == 0) {
            for (int i = 0; i < 2; i++) {
                for (int j = i; j < len; j += 2) {
                    rlt[i] += st[j];
                }
            }
        } else {
            for (int i = 0; i < 2; i++) {
                for (int j = i; j < len; j += 2) {
                    rlt[0] += st[j];
                }
            }
            for (int i = 1; i >= 0; i--) {
                for (int j = i; j < len; j += 2) {
                    rlt[1] += st[j];
                }
            }
        }
        cout << rlt[0] << "\n";
        cout << rlt[1] << "\n";
    }
    return 0;
}