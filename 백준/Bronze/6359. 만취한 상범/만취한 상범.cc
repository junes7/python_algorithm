#include <iostream>
using namespace std;
int main(void) {
    int t, n, rlt;
    cin >> t;
    for (int i = 0; i < t; i++) {
        rlt = 0;
        cin >> n;
        for (int j = 1; j < n; j++) {
            if (j * j > n) break;
            rlt += 1;
        }
        cout << rlt << "\n";
    }
    return 0;
}