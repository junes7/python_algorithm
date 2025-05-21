#include <iostream>
using namespace std;
int main(void) {
    int n, t, elem, cnt = 0, rlt = 0;
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        if (rlt + elem > t)
            break;
        rlt += elem;
        cnt += 1;
    }
    cout << cnt;
    return 0;
}