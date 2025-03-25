#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, st;
    while (cin >> n) {
        if (n == 0) break;
        vector<int> arr(n), r(n - 3 + 1);
        st = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (i < 3)
                st += arr[i];
        }
        r[0] = st;
        for (int i = 0; i < n - 3; i++) {
            st = st - arr[i] + arr[i + 3];
            r[i + 1] = st;
        }
        cout << *max_element(r.begin(), r.end()) << "\n";
    }
    return 0;
}