#include <iostream>
using namespace std;
int facto(int n) {
    return n == 1 ? 1 : n * facto(n - 1);
}
int main(void) {
    int n, elem;
    string st;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        st = to_string(facto(elem));
        cout << st[st.size() - 1] << "\n";
    }
    return 0;
}