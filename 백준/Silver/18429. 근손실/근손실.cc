#include <iostream>
#include <vector>
using namespace std;
int ans = 0;
void dfs(int num, int weight, vector<int> &arr, vector<bool> &visited, int n, int k) {
    if (weight < 500)
        return;
    if (num == n) {
        ans += 1;
        return;
    }
    weight -= k;
    for (int i = 0; i < n; i++) {
        if (visited[i])
            continue;
        visited[i] = true;
        dfs(num + 1, weight + arr[i], arr, visited, n, k);
        visited[i] = false;
    }
}
int main(void) {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<bool> visited(n, false);
    dfs(0, 500, arr, visited, n, k);
    cout << ans;
    return 0;
}