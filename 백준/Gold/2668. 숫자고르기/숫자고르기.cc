#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void dfs(vector<vector<int>> &arr, vector<bool> &visited, int start, int n, vector<int> &ans) {
    visited[n] = true;
    for (int i = 0; i < arr[n].size(); i++) {
        if (!visited[arr[n][i]])
            dfs(arr, visited, start, arr[n][i], ans);
        else if (start == arr[n][i]) {
            ans.push_back(start);
            return;
        }
    }
}
int main(void) {
    int n, elem;
    cin >> n;
    vector<vector<int>> arr(n + 1);
    vector<int> ans;
    vector<bool> visited(n + 1);
    for (int i = 1; i < n + 1; i++) {
        cin >> elem;
        arr[elem].push_back(i);
    }
    for (int i = 1; i < n + 1; i++) {
        fill(visited.begin(), visited.end(), false);
        dfs(arr, visited, i, i, ans);
    }
    sort(ans.begin(), ans.end(), less<int>());
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << "\n";
    return 0;
}