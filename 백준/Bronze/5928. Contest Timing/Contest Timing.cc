#include <iostream>
using namespace std;
int main(void) {
    int d, h, m, time;
    cin >> d >> h >> m;
    if (d < 11 or (d <= 11 and h < 11) or (d <= 11 and h <= 11 and m < 11))
        time = -1;
    else {
        time = (d - 11) * 24 * 60 + (h - 11) * 60 + (m - 11);
        if (time < 0)
            time += 24 * 60;
    }
    cout << time;
    return 0;
}