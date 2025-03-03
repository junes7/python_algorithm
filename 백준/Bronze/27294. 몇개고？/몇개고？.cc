#include <iostream>
using namespace std;
int main(void) {
    int t, s;
    cin >> t >> s;
    cout << (s == 0 && 12 <= t && t <= 16 ? 320 : 280);
    return 0;
}