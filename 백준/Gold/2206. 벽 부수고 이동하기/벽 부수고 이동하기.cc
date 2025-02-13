#include <deque>
#include <iostream>
#include <vector>
using namespace std;
int bfs(int n, int m, vector<vector<int>> &grid) {
    int y, x, ny, nx, wall_broken, dist;
    vector<vector<int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    vector<vector<vector<bool>>> visited(n, vector<vector<bool>>(m, vector<bool>(2, false)));
    deque<vector<int>> que;
    que.push_back({0, 0, 0, 1});
    visited[0][0][0] = true;
    while (!que.empty()) {
        y = que.front()[0], x = que.front()[1], wall_broken = que.front()[2], dist = que.front()[3];
        que.pop_front();
        if (y == n - 1 && x == m - 1) {
            return dist;
        }
        for (int i = 0; i < directions.size(); i++) {
            ny = y + directions[i][0];
            nx = x + directions[i][1];
            if (0 <= ny && ny < n && 0 <= nx && nx < m) {
                if (grid[ny][nx] == 0 && !visited[ny][nx][wall_broken]) {
                    visited[ny][nx][wall_broken] = true;
                    que.push_back({ny, nx, wall_broken, dist + 1});
                } else if (grid[ny][nx] == 1 && wall_broken == 0 && !visited[ny][nx][1]) {
                    visited[ny][nx][1] = true;
                    que.push_back({ny, nx, 1, dist + 1});
                }
            }
        }
    }
    return -1;
}
int main(void) {
    int n, m;
    cin >> n >> m;
    vector<string> t(n);
    vector<vector<int>> grid(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
        cin >> t[i];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            grid[i][j] = t[i][j] - 48;
    cout << bfs(n, m, grid);
    return 0;
}