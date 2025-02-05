#include <deque>
#include <iostream>
#include <vector>
using namespace std;
void bfs(vector<string> &arr, vector<vector<int>> &visited, int n, int m) {
    visited[0][0] = 1;
    int x, y, nx, ny;
    deque<deque<int>> dq;
    dq.push_back({0, 0});
    vector<int> dy = {-1, 1, 0, 0};
    vector<int> dx = {0, 0, -1, 1};
    while (!dq.empty()) {
        y = dq.front()[0], x = dq.front()[1];
        dq.pop_front();
        for (int i = 0; i < 4; i++) {
            ny = y + dy[i];
            nx = x + dx[i];
            if ((0 <= nx && nx < m) && (0 <= ny && ny < n)) {
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
    string t;
    cin >> n >> m;
    vector<string> arr;
    vector<vector<int>> visited(n, vector<int>(m, -1));
    for (int i = 0; i < n; i++) {
        cin >> t;
        arr.push_back(t);
    }
    bfs(arr, visited, n, m);
    cout << visited[n - 1][m - 1];
    return 0;
}