#include <iostream>
using namespace std;
int main(void) {
    int w, l, h, minn, maxn;
    cin >> w;
    cin >> l;
    cin >> h;
    minn = w < l ? w : l;
    maxn = w < l ? l : w;
    cout << (minn / h >= 2 && maxn / minn <= 2 ? "good" : "bad");
    return 0;
}