#include <iostream>
using namespace std;
int main(void) {
    int n;
    bool res = false;
    cin >> n;
    for (int i = 1; i < 10; i++) {
        if (n % i == 0 && n / i <= 9) {
            res = true;
            break;
        }
    }
    cout << res ? 1 : 0;
    return 0;
}