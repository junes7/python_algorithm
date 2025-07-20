#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t, n, p, q, total, cnt;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> p >> q;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end(), less<int>());
        total = 0, cnt = n;
        for (int j = 0; j < n; j++) {
            if (total + arr[j] > q) {
                cnt = j;
                break;
            } else
                total += arr[j];
        }
        cout << "Case " << i + 1 << ": " << min(cnt, p) << "\n";
    }
    return 0;
}