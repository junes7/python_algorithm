#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int cmp(vector<int> &v1, vector<int> &v2) {
    if (v1[1] == v2[1] && v1[2] == v2[2] && v1[3] == v2[3]) return v1[0] < v2[0];
    if (v1[1] == v2[1] && v1[2] == v2[2]) return v1[3] > v2[3];
    if (v1[1] == v2[1]) return v1[2] > v2[2];
    return v1[1] > v2[1];
}
int main(void) {
    int n, k;
    cin >> n >> k;
    bool flag;
    vector<vector<int>> medals(n, vector<int>(4, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> medals[i][j];
        }
    }
    sort(medals.begin(), medals.end(), cmp);
    for (int i = 0; i < n; i++) {
        if (medals[i][0] == k) {
            for (int j = 0; j < n; j++) {
                flag = true;
                for (int t = 1; t < 4; t++) {
                    if (medals[i][t] != medals[j][t]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    cout << j + 1;
                    break;
                }
            }
        }
    }
    return 0;
}