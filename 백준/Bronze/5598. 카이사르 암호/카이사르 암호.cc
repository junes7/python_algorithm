#include <iostream>
using namespace std;
int main(void) {
    string st;
    cin >> st;
    for (int i = 0; i < st.size(); i++) {
        st[i] = st[i] < 68 ? st[i] + 26 - 3 : st[i] - 3;
    }
    cout << st;
    return 0;
}