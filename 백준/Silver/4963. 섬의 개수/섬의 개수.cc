#include <iostream>
#include <vector>
using namespace std;
void dfs(vector<vector<int>> &arr, vector<vector<bool>> &visited, int y, int x, int H, int W) {
    visited[y][x] = true;
    int ny, nx;
    int dy[8] = {-1, -1, -1, 1, 1, 1, 0, 0};
    int dx[8] = {-1, 0, 1, -1, 0, 1, -1, 1};
    for (int i = 0; i < 8; i++) {
        ny = y + dy[i];
        nx = x + dx[i];
        if (0 <= ny && ny < H && 0 <= nx && nx < W) {
            if (!visited[ny][nx] && arr[ny][nx] == 1) {
                dfs(arr, visited, ny, nx, H, W);
            }
        }
    }
}
int main(void) {
    int W, H, cnt;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while (true) {
        cin >> W >> H;
        if (!(W && H))
            break;
        vector<vector<int>> arr(H, vector<int>(W, 0));
        vector<vector<bool>> visited(H, vector<bool>(W, false));
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                cin >> arr[i][j];
            }
        }
        cnt = 0;
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                if (!visited[i][j] && arr[i][j] == 1) {
                    dfs(arr, visited, i, j, H, W);
                    cnt += 1;
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}