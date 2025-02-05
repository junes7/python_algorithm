#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int dfs(vector<string> &arr, vector<vector<bool>> &visited, int y, int x, int n) {
    visited[y][x] = true;
    vector<int> dy = {-1, 1, 0, 0};
    vector<int> dx = {0, 0, -1, 1};
    int ny, nx, cnt = 1;
    for (int i = 0; i < 4; i++) {
        ny = y + dy[i];
        nx = x + dx[i];
        if ((0 <= ny && ny < n) && (0 <= nx && nx < n)) {
            if (!visited[ny][nx] && arr[ny][nx] == '1')
                cnt += dfs(arr, visited, ny, nx, n);
        }
    }
    return cnt;
}
int main(void) {
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    vector<int> r;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j] && arr[i][j] == '1')
                r.push_back(dfs(arr, visited, i, j, n));
        }
    }
    sort(r.begin(), r.end(), less<int>());
    cout << r.size() << "\n";
    for (int i = 0; i < r.size(); i++)
        cout << r[i] << "\n";
    return 0;
}