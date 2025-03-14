#include <iostream>
#include <vector>
using namespace std;
void dfs(vector<vector<int>> &arr, vector<bool> &visited, int node) {
    visited[node] = true;
    for (int i = 0; i < arr[node].size(); i++) {
        if (!visited[arr[node][i]])
            dfs(arr, visited, arr[node][i]);
    }
}
int main(void) {
    int n, m, u, v, cnt = 0;
    cin >> n >> m;
    vector<vector<int>> arr(n + 1);
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    vector<bool> visited(n + 1);
    for (int i = 1; i < n + 1; i++) {
        if (!visited[i]) {
            dfs(arr, visited, i);
            cnt += 1;
        }
    }
    cout << cnt;
    return 0;
}