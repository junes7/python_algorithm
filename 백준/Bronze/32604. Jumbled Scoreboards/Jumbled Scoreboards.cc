#include <iostream>
using namespace std;
int main(void) {
    int n, a, b, preva = 0, prevb = 0;
    bool flag = true;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (preva > a || prevb > b) {
            flag = false;
            break;
        }
        preva = a, prevb = b;
    }
    cout << (flag ? "yes" : "no");
    return 0;
}