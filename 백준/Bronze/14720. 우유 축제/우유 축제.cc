#include <iostream>
using namespace std;
int main(void) {
    int n, cnt = 0, elem;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        if (elem == cnt % 3)
            cnt += 1;
    }
    cout << cnt;
    return 0;
}