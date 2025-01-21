#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
    int n, m, cnt = 0, start, end, mid;
    string t;
    cin >> n >> m;
    vector<string> s;
    for (int i = 0; i < n; i++) {
        cin >> t;
        s.push_back(t);
    }
    sort(s.begin(), s.end(), less<string>());
    for (int i = 0; i < m; i++) {
        cin >> t;
        start = 0, end = s.size() - 1;
        while (start <= end) {
            mid = (start + end) / 2;
            if (s[mid] == t) {
                cnt += 1;
                break;
            } else if (s[mid] > t) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
    }
    cout << cnt;
    return 0;
}