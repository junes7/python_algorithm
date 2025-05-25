#include <iostream>
using namespace std;
int main(void) {
    int t, n, s;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        s = 0;
        for (int j = 1; j < n + 1; j++) {
            if (j % 2 != 0)
                s += j;
        }
        cout << s << "\n";
    }
    return 0;
}