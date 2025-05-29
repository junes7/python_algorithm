#include <iostream>
using namespace std;
int facto(int n) {
    return n > 1 ? n * facto(n - 1) : 1;
}
int main(void) {
    string n;
    int s;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while (1) {
        cin >> n;
        s = 0;
        if (n == "0") break;
        for (int i = 1; i < n.size() + 1; i++) {
            s += (n[n.size() - i] - 48) * facto(i);
        }
        cout << s << "\n";
    }
    return 0;
}