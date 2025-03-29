#include <iostream>
using namespace std;
int main(void) {
    int w, h, x, y;
    cin >> w >> h >> x >> y;
    cout << (w - x >= 2 && h - y >= 2 ? 1 : 0);
    return 0;
}