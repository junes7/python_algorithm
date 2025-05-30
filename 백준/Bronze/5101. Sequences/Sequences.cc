#include <iostream>
using namespace std;
int main(void) {
    int n, diff, t;
    while (1) {
        cin >> n >> diff >> t;
        if (diff == 0) break;
        cout << ((t - n) % diff == 0 and (t - n) / diff + 1 > 0 ? to_string((t - n) / diff + 1) : "X") << "\n";
    }
    return 0;
}