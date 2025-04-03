#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, m, cnt;
    bool flag = true;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m, 0));
    for (int i = 0; i < n; i++) {
        cnt = 0;
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 'A')
                cnt += 1;
        }
        if (cnt != 1) {
            flag = false;
            break;
        }
    }
    cout << (flag ? "Yes" : "No");
    return 0;
}