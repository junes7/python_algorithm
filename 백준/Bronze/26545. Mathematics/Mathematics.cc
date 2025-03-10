#include <iostream>
using namespace std;
int main(void) {
    int n, elem, s = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        s += elem;
    }
    cout << s;
    return 0;
}