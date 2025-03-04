#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(void) {
    int n, m;
    cin >> n;
    cin >> m;
    vector<int> a(n), b(m);
    map<int, int> dict;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (b[j] - a[i] >= 0) {
                if (dict.find(b[j] - a[i]) != dict.end()) {
                    dict[b[j] - a[i]] += 1;
                } else {
                    dict[b[j] - a[i]] = 1;
                }
            }
        }
    }
    vector<pair<int, int>> v(dict.begin(), dict.end());
    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.second == b.second ? a.first < b.first : a.second > b.second;
    });
    cout << (v.size() > 0 ? v[0].first : 0);
    return 0;
}