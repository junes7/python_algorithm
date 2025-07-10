#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int x, cnt = 0;
    cin >> x;
    vector<int> stick(7);
    for (int i = 0; i < 7; i++) {
        stick[i] = pow(2, (6 - i));
        if (x > 0 && x >= stick[i]) {
            x -= stick[i];
            cnt += 1;
        }
    }
    cout << cnt;
    return 0;
}