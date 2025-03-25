#include <iostream>
using namespace std;
int main(void) {
    int n;
    string st;
    cin >> n;
    cin >> st;
    if (st[st.size() - 1] == 'G') {
        st.erase(st.size() - 1, 1);
    } else {
        st += "G";
    }
    cout << st;
    return 0;
}