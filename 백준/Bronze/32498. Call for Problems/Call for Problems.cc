#include <iostream>
using namespace std;
int main(void) {
    int n, d, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> d;
        if (d % 2 == 1)
            cnt += 1;
    }
    cout << cnt;
    return 0;
}