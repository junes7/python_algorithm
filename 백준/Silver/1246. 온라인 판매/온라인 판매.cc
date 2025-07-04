#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, m, cnt, total, rlt = 0, a = 0;
    cin >> n >> m;
    vector<int> arr(m);
    for (int i = 0; i < m; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), less<int>());
    for (int i = 0; i < m; i++) {
        cnt = m - i;
        total = (n <= cnt ? n : cnt) * arr[i];
        if (rlt < total) {
            rlt = total;
            a = arr[i];
        }
    }
    cout << a << ' ' << rlt;
    return 0;
}