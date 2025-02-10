#include <iostream>
#include <vector>
using namespace std;
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};
int dfs(vector<vector<bool>> &visited, vector<string> &board, int y, int x, char color, int m, int n) {
    int ny, nx, count = 1;
    visited[y][x] = true;
    for (int i = 0; i < 4; i++) {
        ny = y + dy[i];
        nx = x + dx[i];
        if (0 <= ny && ny < m && 0 <= nx && nx < n) {
            if (!visited[ny][nx] && board[ny][nx] == color) {
                count += dfs(visited, board, ny, nx, color, m, n);
            }
        }
    }
    return count;
}
vector<int> calculate_power(int n, int m, vector<string> &board) {
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    int cnt;
    vector<int> t(2, 0);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) {
                cnt = dfs(visited, board, i, j, board[i][j], m, n);
                if (board[i][j] == 'W')
                    t[0] += cnt * cnt;
                else
                    t[1] += cnt * cnt;
            }
        }
    }
    return t;
}
int main(void) {
    int n, m;
    vector<int> result(2);
    cin >> n >> m;
    vector<string> board(m);
    for (int i = 0; i < m; i++)
        cin >> board[i];
    result = calculate_power(n, m, board);
    cout << result[0] << ' ' << result[1];
    return 0;
}