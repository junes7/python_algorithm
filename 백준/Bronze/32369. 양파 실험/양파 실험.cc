#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, a, b, t;
    cin >> n >> a >> b;
    vector<int> on = {1, 1};
    for (int i = 0; i < n; i++) {
        on[0] += a;
        on[1] += b;
        if (on[0] < on[1]) {
            t = on[0];
            on[0] = on[1];
            on[1] = t;
        } else if (on[0] == on[1]) {
            on[1] -= 1;
        }
    }
    cout << on[0] << ' ' << on[1];
    return 0;
}