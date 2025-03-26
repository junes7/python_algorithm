#include <iostream>
using namespace std;
int main(void) {
    int n, a, b;
    cin >> n;
    cin >> a >> b;
    cout << (a / 2 + b <= n ? a / 2 + b : n);
    return 0;
}