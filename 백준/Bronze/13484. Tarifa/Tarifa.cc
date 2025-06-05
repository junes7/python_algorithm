#include <iostream>
using namespace std;
int main(void) {
    int x, n, p, rlt = 0;
    cin >> x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p;
        rlt += x - p;
    }
    rlt += x;
    cout << rlt;
    return 0;
}