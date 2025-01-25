#include <iostream>
using namespace std;

int main(void) {
    int n, m, s, num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        s = 0;
        for (int j = 0; j < m; j++) {
            cin >> num;
            s += num;
        }
        cout << s << "\n";
    }
    return 0;
}