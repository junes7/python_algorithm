#include <iostream>
using namespace std;

int main(void) {
    int d, num[2], t;
    cin >> num[0] >> num[1];
    for (int i = 0; i < 2; i++) {
        t = 0, d = 100;
        while (num[i] > 0) {
            t += num[i] % 10 * d;
            d /= 10;
            num[i] /= 10;
        }
        num[i] = t;
    }
    cout << (num[0] > num[1] ? num[0] : num[1]) << endl;
    return 0;
}