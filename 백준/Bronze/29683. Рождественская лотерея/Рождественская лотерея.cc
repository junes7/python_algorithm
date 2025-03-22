#include <iostream>
using namespace std;
int main(void) {
    int n, elem, A, cnt = 0;
    cin >> n >> A;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        cnt += elem / A;
    }
    cout << cnt;
    return 0;
}