#include <iostream>
using namespace std;
int main(void) {
    int len;
    string st;
    cin >> st;
    len = st.size() / 2;
    cout << st.substr(0, len) << ' ' << st.substr(len, len);
    return 0;
}