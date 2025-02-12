#include <iostream>
#include <queue>
#include <vector>
using namespace std;
void bfs(vector<vector<int>> &arr, vector<int> &visited, int start, int end) {
    queue<int> q;
    int node;
    q.push(start);
    visited[start] = 0;
    while (!q.empty()) {
        node = q.front();
        q.pop();
        if (node == end) return;
        for (int i = 0; i < arr[node].size(); i++) {
            if (visited[arr[node][i]] == -1) {
                visited[arr[node][i]] = visited[node] + 1;
                q.push(arr[node][i]);
            }
        }
    }
}
int main(void) {
    int n, start, end, m, u, v;
    cin >> n;
    vector<vector<int>> arr(n + 1);
    vector<int> visited(n + 1, -1);
    cin >> start >> end;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    bfs(arr, visited, start, end);
    cout << visited[end];
    return 0;
}