#include <iostream>
using namespace std;

int main(void) {
    int n, cnt = 1, ran = 2;
    cin >> n;
    while (ran <= n)
        ran += 6 * cnt++;
    cout << cnt << endl;
    return 0;
}