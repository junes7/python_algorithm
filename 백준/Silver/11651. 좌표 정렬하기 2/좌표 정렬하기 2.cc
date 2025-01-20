#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, a, b;
    cin >> n;
    vector<pair<int, int>> num;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        num.push_back({a, b});
    }
    sort(num.begin(), num.end(), [](pair<int, int> &a, pair<int, int> &b) {
        if (a.second == b.second) return a.first < b.first;
        return a.second < b.second;
    });
    for (int i = 0; i < n; i++) {
        cout << num[i].first << ' ' << num[i].second << "\n";
    }
    return 0;
}