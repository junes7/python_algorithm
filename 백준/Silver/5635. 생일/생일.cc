#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, d, m, y;
    cin >> n;
    vector<vector<int>> date;
    vector<string> name(n);
    for (int i = 0; i < n; i++) {
        cin >> name[i] >> d >> m >> y;
        date.push_back({y, m, d, i});
    }
    sort(date.begin(), date.end());
    cout << name[date[date.size() - 1][3]] << "\n";
    cout << name[date[0][3]];
    return 0;
}