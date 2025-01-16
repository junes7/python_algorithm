#include <iostream>
using namespace std;

int main(void) {
    int n, d, cnt, elem, s = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        d = 1, cnt = 0;
        cin >> elem;
        while (d <= elem) {
            if (elem % d == 0)
                cnt += 1;
            d += 1;
        }
        if (cnt == 2)
            s += 1;
    }
    cout << s;
    return 0;
}