#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, m, l, t, result = 0;
    string st;
    cin >> n >> m;
    vector<vector<int>> board(n + 2, vector<int>(m + 2, 0));
    for (int i = 1; i < n + 1; i++) {
        cin >> st;
        for (int j = 1; j < m + 1; j++)
            board[i][j] = st[j - 1] - 48;
    }
    vector<vector<int>> ld(n + 2, vector<int>(m + 2, 0));
    vector<vector<int>> rd(n + 2, vector<int>(m + 2, 0));
    vector<vector<int>> lu(n + 2, vector<int>(m + 2, 0));
    vector<vector<int>> ru(n + 2, vector<int>(m + 2, 0));
    for (int i = n; i > 0; i--) {
        for (int j = 1; j < m + 1; j++) {
            if (board[i][j] == 1) {
                ld[i][j] = ld[i + 1][j - 1] + 1;
                rd[i][j] = rd[i + 1][j + 1] + 1;
            }
        }
    }
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < m + 1; j++) {
            if (board[i][j] == 1) {
                lu[i][j] = lu[i - 1][j - 1] + 1;
                ru[i][j] = ru[i - 1][j + 1] + 1;
            }
        }
    }
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < m + 1; j++) {
            l = result > 0 ? result : 1;
            for (int k = l; k < min(ld[i][j], rd[i][j]) + 1; k++) {
                t = i + 2 * (k - 1);
                if (t > n + 1) break;
                if (board[t][j] && lu[t][j] >= k && ru[t][j] >= k) result = k;
            }
            for (int k = l; k < min(ru[i][j], rd[i][j]) + 1; k++) {
                t = j + 2 * (k - 1);
                if (t > m + 1) break;
                if (board[i][t] && lu[i][t] >= k && ld[i][t] >= k) result = k;
            }
        }
    }
    cout << result;
    return 0;
}