#include <iostream>
using namespace std;
int main(void) {
    int t, n, maxn, l;
    string name, s;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        maxn = 0;
        for (int j = 0; j < n; j++) {
            cin >> s >> l;
            if (maxn < l) {
                maxn = l;
                name = s;
            }
        }
        cout << name << "\n";
    }
    return 0;
}