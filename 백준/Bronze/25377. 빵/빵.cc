#include <iostream>
using namespace std;
int main(void) {
    int n, a, b, time = 1001;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (a <= b && b < time)
            time = b;
    }
    cout << (time == 1001 ? -1 : time);
    return 0;
}