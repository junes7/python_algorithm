#include <iostream>
using namespace std;
int main(void) {
    int m, n;
    cin >> m >> n;
    cout << ((m * n) % 3 == 0 ? "YES" : "NO");
    return 0;
}