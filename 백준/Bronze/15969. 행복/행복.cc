#include <iostream>
using namespace std;
int main(void) {
    int n, elem, minn = 1000, maxn = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        if (minn > elem)
            minn = elem;
        if (maxn < elem)
            maxn = elem;
    }
    cout << maxn - minn;
    return 0;
}