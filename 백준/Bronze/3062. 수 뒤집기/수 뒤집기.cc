#include <algorithm>
#include <iostream>
using namespace std;
int main(void) {
    int n, total;
    string t, r;
    bool flag;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        total = 0, flag = true;
        total += stoi(t);
        reverse(t.begin(), t.end());
        total += stoi(t);
        r = to_string(total);
        for (int i = 0; i < r.size() / 2; i++) {
            if (r[i] != r[r.size() - 1 - i]) {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << "\n";
    }
    return 0;
}