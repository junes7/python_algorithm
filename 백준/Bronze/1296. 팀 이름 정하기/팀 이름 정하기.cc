#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t, rlt, total = -1;
    string yeondu, st, tar = "LOVE", ans;
    cin >> yeondu;
    cin >> t;
    vector<string> teams(t);
    vector<int> elem(4);
    for (int i = 0; i < t; i++)
        cin >> teams[i];
    sort(teams.begin(), teams.end(), less<string>());
    for (int i = 0; i < t; i++) {
        st = yeondu + teams[i];
        rlt = 1;
        for (int j = 0; j < 4; j++)
            elem[j] = count(st.begin(), st.end(), tar[j]);
        for (int j = 0; j < 3; j++) {
            for (int k = j + 1; k < 4; k++) {
                rlt *= (elem[j] + elem[k]);
            }
        }
        if (total < rlt % 100) {
            total = rlt % 100;
            ans = teams[i];
        }
    }
    cout << ans;
    return 0;
}