#include <iostream>
using namespace std;
int main(void) {
    int n, cnt = 0;
    string st;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> st;
        if (st[0] == 'C')
            cnt += 1;
    }
    cout << cnt;
    return 0;
}