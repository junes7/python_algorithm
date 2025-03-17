#include <iostream>
using namespace std;
int main(void) {
    int t, cnt = 0, elem;
    cin >> t;
    for (int i = 0; i < 5; i++) {
        cin >> elem;
        if (elem == t)
            cnt++;
    }
    cout << cnt;
    return 0;
}