#include <iostream>
using namespace std;
int main(void) {
    int n, m, k;
    cin >> n >> m >> k;
    cout << (n % (k - m) == 0 ? n / (k - m) : n / (k - m) + 1);
    return 0;
}