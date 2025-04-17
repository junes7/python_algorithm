#include <iostream>
using namespace std;
int main(void) {
    int w, h, n, a, b, rlt;
    cin >> w >> h;
    cin >> n >> a >> b;
    rlt = (w / a) * (h / b);
    if (w < a || h < b)
        cout << -1;
    else {
        cout << (n % rlt == 0 ? n / rlt : n / rlt + 1);
    }
    return 0;
}