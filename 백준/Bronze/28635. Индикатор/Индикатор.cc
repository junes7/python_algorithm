#include <iostream>
using namespace std;
int main(void) {
    int cnt = 0, m, a, b;
    cin >> m;
    cin >> a;
    cin >> b;
    while (true) {
        if (a == b) break;
        if (a == m) a -= m;
        a += 1;
        cnt += 1;
    }
    cout << cnt;
    return 0;
}