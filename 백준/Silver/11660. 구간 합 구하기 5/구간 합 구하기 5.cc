#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, m, elem;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<vector<int>> num;
    vector<int> t;
    cin >> n >> m;
    for (int i = 0; i < n + 1; i++) {
        t = {0};
        for (int j = 1; j < n + 1; j++) {
            if (i == 0)
                t.push_back(0);
            else {
                cin >> elem;
                t.push_back(elem);
            }
        }
        num.push_back(t);
    }
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            num[i][j] += num[i - 1][j] + num[i][j - 1] - num[i - 1][j - 1];
        }
    }
    for (int i = 0; i < m; i++) {
        t = {};
        for (int j = 0; j < 4; j++) {
            cin >> elem;
            t.push_back(elem);
        }
        cout << num[t[2]][t[3]] - num[t[2]][t[1] - 1] - num[t[0] - 1][t[3]] + num[t[0] - 1][t[1] - 1] << "\n";
    }
    return 0;
}