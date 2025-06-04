#include <iostream>
using namespace std;
int main(void) {
    int n, k, rlt;
    while (cin >> n >> k) {
        rlt = n;
        while (n / k) {
            rlt += n / k;
            n = n / k + n % k;
        }
        cout << rlt << "\n";
    }
    return 0;
}