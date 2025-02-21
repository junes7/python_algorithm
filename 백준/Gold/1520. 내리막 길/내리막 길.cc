#include <iostream>
#include <vector>
using namespace std;
vector<int> dy = {-1, 1, 0, 0}, dx = {0, 0, -1, 1};
int solve(vector<vector<int>> &arr, vector<vector<int>> &dp, int m, int n, int y, int x) {
    int ny, nx;
    if (y == m - 1 && x == n - 1) return 1;
    if (dp[y][x] != -1) return dp[y][x];
    dp[y][x] = 0;
    for (int i = 0; i < 4; i++) {
        ny = y + dy[i];
        nx = x + dx[i];
        if (0 <= ny && ny < m && 0 <= nx && nx < n) {
            if (arr[ny][nx] < arr[y][x]) {
                dp[y][x] += solve(arr, dp, m, n, ny, nx);
            }
        }
    }
    return dp[y][x];
}
int main(void) {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> arr(m, vector<int>(n, 0)), dp(m, vector<int>(n, -1));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    cout << solve(arr, dp, m, n, 0, 0);
    return 0;
}