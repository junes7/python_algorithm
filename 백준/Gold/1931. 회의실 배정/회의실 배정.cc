#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, start, end, cnt = 1;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>> time;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> start >> end;
        time.push_back({start, end});
    }
    sort(time.begin(), time.end(), [](const vector<int> a, const vector<int> b) {
        if (a[1] == b[1]) return a[0] < b[0];
        return a[1] < b[1];
    });
    start = time[0][0], end = time[0][1];
    for (int i = 1; i < n; i++) {
        if (end <= time[i][0]) {
            start = time[i][0];
            end = time[i][1];
            cnt += 1;
        }
    }
    cout << cnt;
    return 0;
}