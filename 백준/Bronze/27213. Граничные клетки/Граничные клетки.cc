#include <iostream>
using namespace std;
int main(void) {
    int m, n;
    cin >> m;
    cin >> n;
    cout << ((m == 1 || n == 1) ? m * n : m * n - (m - 2) * (n - 2));
    return 0;
}