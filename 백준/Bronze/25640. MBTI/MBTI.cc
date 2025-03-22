#include <iostream>
using namespace std;
int main(void) {
    string t, elem;
    int n, cnt = 0;
    cin >> t;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        if (elem == t)
            cnt += 1;
    }
    cout << cnt;
    return 0;
}