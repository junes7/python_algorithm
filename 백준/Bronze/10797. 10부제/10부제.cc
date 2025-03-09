#include <iostream>
using namespace std;
int main(void) {
    int n, cnt = 0, elem;
    cin >> n;
    for (int i = 0; i < 5; i++) {
        cin >> elem;
        if (elem == n)
            cnt += 1;
    }
    cout << cnt;
    return 0;
}