#include <iostream>
using namespace std;
int main(void) {
    int x, y, cnt = 1;
    cin >> x >> y;
    while (1) {
        if ((y - x) * cnt >= y) break;
        cnt += 1;
    }
    cout << cnt;
    return 0;
}