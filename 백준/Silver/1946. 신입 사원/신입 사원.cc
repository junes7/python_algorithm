#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int t, n, cnt, cutline;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        vector<vector<int>> applicants;
        for (int j = 0; j < n; j++) {
            cin >> cnt >> cutline;
            applicants.push_back({cnt, cutline});
        }
        sort(applicants.begin(), applicants.end());
        cnt = 1, cutline = applicants[0][1];
        for (int j = 1; j < n; j++) {
            if (cutline > applicants[j][1]) {
                cutline = applicants[j][1];
                cnt += 1;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}