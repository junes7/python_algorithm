#include <iostream>
#include <vector>
using namespace std;
void solution(int n, vector<int> arr, vector<vector<int>> que) {
    int s, e;
    vector<vector<bool>> dp(n + 1, vector<bool>(n + 1, false));
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n + 1 - i; j++) {
            s = j, e = j + i;
            if (s == e || (arr[s] == arr[e] && (s + 1 == e || dp[s + 1][e - 1])))
                dp[s][e] = true;
        }
    }
    for (int i = 0; i < que.size(); i++) {
        s = que[i][0], e = que[i][1];
        cout << (dp[s][e] ? 1 : 0) << "\n";
    }
}
int main(void) {
    int n, m;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    vector<int> arr(n + 1);
    arr[0] = 0;
    for (int i = 1; i < n + 1; i++)
        cin >> arr[i];
    cin >> m;
    vector<vector<int>> que(m, vector<int>(2, 0));
    for (int i = 0; i < m; i++)
        cin >> que[i][0] >> que[i][1];
    solution(n, arr, que);
    return 0;
}