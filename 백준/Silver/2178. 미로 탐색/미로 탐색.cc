#include <deque>
#include <iostream>
#include <vector>
using namespace std;
void bfs(vector<string> &arr, vector<vector<int>> &visited, int n, int m) {
    int y, x, ny, nx;
    visited[0][0] = 1;
    vector<int> dy = {-1, 1, 0, 0};
    vector<int> dx = {0, 0, -1, 1};
    deque<deque<int>> dq;
    dq.push_back({0, 0});
    while (!dq.empty()) {
        y = dq.front()[0], x = dq.front()[1];
        dq.pop_front();
        for (int i = 0; i < 4; i++) {
            ny = y + dy[i];
            nx = x + dx[i];
            if ((0 <= ny && ny < n) && (0 <= nx && nx < m)) {
                if (visited[ny][nx] == -1 && arr[ny][nx] == '1') {
                    visited[ny][nx] = visited[y][x] + 1;
                    dq.push_back({ny, nx});
                }
            }
        }
    }
}
int main(void) {
    int n, m;
    cin >> n >> m;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<vector<int>> visited(n, vector<int>(m, -1));
    bfs(arr, visited, n, m);
    cout << visited[n - 1][m - 1];
    return 0;
}