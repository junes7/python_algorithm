#include <iostream>
using namespace std;
int main(void) {
    int n, a, b, s, t;
    cin >> n >> a >> b;
    cin >> s >> t;
    if (a + 1 <= s && s < b && a + 1 <= t && t < b) {
        cout << "City";
    } else if ((1 <= s && s < a + 1) && (1 <= t && t < a + 1) || (b <= s && s < n + 1) && (b <= t && t < n + 1)) {
        cout << "Outside";
    } else {
        cout << "Full";
    }
    return 0;
}
