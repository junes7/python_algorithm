#include <iostream>
using namespace std;
int main(void) {
    int n, m, cnt = 0;
    string st;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> st;
        if (st.find('+') != string::npos)
            cnt += 1;
    }
    cout << cnt;
    return 0;
}