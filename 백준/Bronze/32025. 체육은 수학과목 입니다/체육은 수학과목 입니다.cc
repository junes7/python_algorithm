#include <iostream>
using namespace std;
int main(void) {
    int h, w, minn;
    cin >> h;
    cin >> w;
    minn = h < w ? h : w;
    cout << minn / 2.0 * 100;
    return 0;
}