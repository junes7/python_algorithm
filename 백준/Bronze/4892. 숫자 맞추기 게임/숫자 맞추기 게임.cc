#include <iostream>
using namespace std;
int main(void) {
    int n0, n1, n2, n3, n4, idx = 0;
    while (true) {
        cin >> n0;
        if (n0 == 0) break;
        idx += 1;
        n1 = 3 * n0;
        n2 = (n1 % 2 == 0 ? n1 : n1 + 1) / 2;
        n3 = 3 * n2;
        n4 = n3 / 9;
        cout << idx << ". " << (n1 % 2 != 0 ? "odd " : "even ") << n4 << "\n";
    }
    return 0;
}