#include <iostream>
using namespace std;
int main(void) {
    int n, a, b, tmp;
    string st;
    cin >> st >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        tmp = st[a];
        st[a] = st[b];
        st[b] = tmp;
    }
    cout << st;
    return 0;
}