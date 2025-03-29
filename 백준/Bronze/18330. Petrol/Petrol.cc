#include <iostream>
using namespace std;
int main(void) {
    int n, k, x;
    cin >> n;
    cin >> k;
    x = min(k + 60, n);
    cout << x * 1500 + (n - x) * 3000;
    return 0;
}