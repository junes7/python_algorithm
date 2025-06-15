#include <iostream>
using namespace std;
int main(void) {
    int n, cnt = 1, rlt = 0;
    cin >> n;
    while (n >= 1) {
        if (n < cnt) cnt = 1;
        n -= cnt;
        rlt += 1;
        cnt += 1;
    }
    cout << rlt;
    return 0;
}