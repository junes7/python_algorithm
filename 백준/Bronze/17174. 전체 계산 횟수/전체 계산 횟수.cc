#include <iostream>
using namespace std;
int main(void) {
    int n, m, total;
    cin >> n >> m;
    total = n;
    while (n >= m) {
        total += n / m;
        n /= m;
    }
    cout << total;
    return 0;
}