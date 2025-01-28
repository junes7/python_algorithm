#include <iostream>
using namespace std;
int main(void) {
    int a, b, cnt = 1;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b;
    while (b > a) {
        if (b % 2 != 0 && b % 10 != 1)
            break;
        b = b % 10 == 1 ? (b - 1) / 10 : b / 2;
        cnt += 1;
    }
    cout << (b == a ? cnt : -1);
    return 0;
}