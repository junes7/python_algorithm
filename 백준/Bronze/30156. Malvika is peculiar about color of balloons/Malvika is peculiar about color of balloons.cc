#include <iostream>
using namespace std;
int main(void) {
    int n, cnta, cntb;
    string st;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> st;
        cnta = 0, cntb = 0;
        for (int j = 0; j < st.size(); j++) {
            if (st[j] == 'a')
                cnta += 1;
            else if (st[j] == 'b')
                cntb += 1;
        }
        cout << (cnta < cntb ? cnta : cntb) << "\n";
    }
    return 0;
}