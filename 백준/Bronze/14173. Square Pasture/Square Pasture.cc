#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
    int x1, y1, x2, y2, x3, y3, x4, y4, rltx, rlty;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    rltx = max(x2, x4) - min(x1, x3);
    rlty = max(y2, y4) - min(y1, y3);
    cout << pow(max(rltx, rlty), 2);
    return 0;
}