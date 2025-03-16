#include <iostream>
using namespace std;
int main(void) {
    int n, m;
    string st;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> st;
        for (int j = m - 1; j >= 0; j--) {
            cout << st[j];
        }
        cout << "\n";
    }
    return 0;
}