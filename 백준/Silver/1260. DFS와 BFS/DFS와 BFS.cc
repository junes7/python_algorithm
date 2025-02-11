#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<int> ans;
vector<bool> visited;
void dfs(vector<vector<int>> &arr, int st) {
    visited[st] = true;
    for (int i = 0; i < arr[st].size(); i++) {
        if (!visited[arr[st][i]]) {
            ans.push_back(arr[st][i]);
            visited[arr[st][i]] = true;
            dfs(arr, arr[st][i]);
        }
    }
}
void bfs(vector<vector<int>> &arr, int st) {
    visited[st] = true;
    int node;
    queue<int> que;
    que.push(st);
    while (!que.empty()) {
        node = que.front();
        ans.push_back(node);
        que.pop();
        for (int i = 0; i < arr[node].size(); i++) {
            if (!visited[arr[node][i]]) {
                visited[arr[node][i]] = true;
                que.push(arr[node][i]);
            }
        }
    }
}
int main(void) {
    int n, m, st, u, v;
    cin >> n >> m >> st;
    vector<vector<int>> arr(n + 1);
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    for (int i = 1; i < n + 1; i++)
        sort(arr[i].begin(), arr[i].end(), less<int>());
    ans.push_back(st);
    for (int i = 0; i < n + 1; i++)
        visited.push_back(false);
    dfs(arr, st);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << ' ';
    }
    cout << "\n";
    ans = {};
    fill(visited.begin(), visited.end(), false);
    bfs(arr, st);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << ' ';
    }
    return 0;
}