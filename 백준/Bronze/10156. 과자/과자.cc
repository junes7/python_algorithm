#include <iostream>
using namespace std;
int main(void) {
    int k, n, m;
    cin >> k >> n >> m;
    cout << (k * n - m < 0 ? 0 : k * n - m);
    return 0;
}