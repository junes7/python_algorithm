#include <deque>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int dfs(vector<vector<int>> &arr, int start, int n) {
    int node;
    vector<int> visited(n + 1, -1);
    visited[start] = 0;
    deque<int> dq;
    dq.push_back(start);
    while (!dq.empty()) {
        node = dq.front();
        dq.pop_front();
        for (int i = 0; i < arr[node].size(); i++) {
            if (visited[arr[node][i]] == -1) {
                visited[arr[node][i]] = visited[node] + 1;
                dq.push_back(arr[node][i]);
            }
        }
    }
    return accumulate(visited.begin(), visited.end(), 0);
}
int main(void) {
    int n, m, u, v, cnt, ans = 0, min_val = 5002;
    cin >> n >> m;
    vector<vector<int>> arr(n + 1);
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    for (int i = 1; i < n + 1; i++) {
        cnt = dfs(arr, i, n);
        if (cnt < min_val) {
            min_val = cnt;
            ans = i;
        }
    }
    cout << ans;
    return 0;
}