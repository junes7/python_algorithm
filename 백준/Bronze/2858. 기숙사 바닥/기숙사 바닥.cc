#include <iostream>
using namespace std;
int main(void) {
    int r, b, LpW, LmW;
    cin >> r >> b;
    LpW = (r + 4) / 2, LmW = r + b;
    for (int i = 3; i < LpW; i++) {
        if ((LpW - i) * i == LmW) {
            cout << (LpW - i > i ? LpW - i : i) << ' ';
            cout << (LpW - i < i ? LpW - i : i);
            break;
        }
    }
    return 0;
}