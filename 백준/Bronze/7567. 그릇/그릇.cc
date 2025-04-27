#include <iostream>
using namespace std;
int main(void) {
    int ans = 0;
    string st;
    cin >> st;
    for (int i = 0; i < st.size(); i++) {
        if (i == 0)
            ans += 10;
        else if (st[i] == st[i - 1])
            ans += 5;
        else
            ans += 10;
    }
    cout << ans;
    return 0;
}