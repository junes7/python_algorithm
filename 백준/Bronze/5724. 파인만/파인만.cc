#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
    int n, rlt;
    while (1) {
        cin >> n;
        if (n == 0) break;
        rlt = 0;
        for (int i = 1; i < n + 1; i++) {
            rlt += pow(n - i + 1, 2);
        }
        cout << rlt << "\n";
    }
    return 0;
}