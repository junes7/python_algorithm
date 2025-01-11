#include <iostream>
using namespace std;

int main(void) {
    int elem, maxn = 0, idx = 0;
    for (int i = 0; i < 9; i++) {
        cin >> elem;
        if (maxn < elem) {
            maxn = elem;
            idx = i + 1;
        }
    }
    cout << maxn << "\n";
    cout << idx << endl;
    return 0;
}