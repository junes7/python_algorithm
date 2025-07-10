#include <iostream>
using namespace std;
int main(void) {
    int a, b, n, rlt;
    cin >> a >> b >> n;
    for (int i = 0; i < n; i++) {
        a = (a % b) * 10;
        rlt = a / b;
    }
    cout << rlt;
    return 0;
}