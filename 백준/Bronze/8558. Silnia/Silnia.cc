#include <iostream>
using namespace std;
int facto(int n) {
    return n > 1 ? n * facto(n - 1) : 1;
}
int main(void) {
    int n;
    string st;
    cin >> n;
    st = to_string(facto(n));
    cout << st[st.size() - 1];
    return 0;
}