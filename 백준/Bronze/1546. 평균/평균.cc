#include <iostream>
using namespace std;

int main(void) {
    int n, elem, maxn = 0;
    cin >> n;
    double s, num[n];
    for (int i = 0; i < n; i++) {
        cin >> elem;
        num[i] = elem;
        if (maxn < elem)
            maxn = elem;
    }
    for (int i = 0; i < n; i++) {
        num[i] /= maxn;
        s += num[i];
    }
    cout << (double)s / n * 100 << endl;
    return 0;
}