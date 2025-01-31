#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, m, a, s = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    vector<int> num = {0};
    for (int i = 0; i < n; i++) {
        cin >> a;
        s += a;
        num.push_back(s);
    }
    for (int i = 0; i < m; i++) {
        cin >> a >> s;
        cout << num[s] - num[a - 1] << "\n";
    }
    return 0;
}