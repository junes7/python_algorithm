#include <iostream>
using namespace std;
int main(void) {
    int e, f, c, t, cnt = 0;
    cin >> e >> f >> c;
    t = e + f;
    while (t >= c) {
        cnt += t / c;
        t = t / c + t % c;
    }
    cout << cnt;
    return 0;
}