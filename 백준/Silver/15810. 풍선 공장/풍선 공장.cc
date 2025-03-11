#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, m;
    long long int start, end, mid, s, r = 0, maxn = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (maxn < arr[i])
            maxn = arr[i];
    }
    start = 0, end = maxn * m;
    while (start <= end) {
        mid = (start + end) / 2;
        s = 0;
        for (int i = 0; i < n; i++)
            s += mid / arr[i];
        if (s < m)
            start = mid + 1;
        else {
            end = mid - 1;
            r = mid;
        }
    }
    cout << r;
    return 0;
}