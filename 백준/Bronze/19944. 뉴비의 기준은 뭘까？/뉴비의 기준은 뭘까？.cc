#include <iostream>
using namespace std;
int main(void) {
    int n, m;
    cin >> n >> m;
    cout << (m <= 2 ? "NEWBIE!" : (m <= n ? "OLDBIE!" : "TLE!"));
    return 0;
}