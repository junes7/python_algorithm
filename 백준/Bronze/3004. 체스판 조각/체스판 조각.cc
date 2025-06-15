#include <iostream>
using namespace std;
int main(void) {
    int n, rlt = 1, a = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        rlt += a;
        if (i % 2 == 0) a += 1;
    }
    cout << rlt;
    return 0;
}