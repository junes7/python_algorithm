#include <iostream>
using namespace std;
int main(void) {
    int n, h, elem, cnt = 0;
    cin >> n >> h;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        if (h >= elem) cnt += 1;
    }
    cout << cnt;
    return 0;
}