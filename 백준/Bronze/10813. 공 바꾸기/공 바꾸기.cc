#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, m, t, a, b;
    vector<int> num;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        num.push_back(i + 1);
    }
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        t = num[a - 1];
        num[a - 1] = num[b - 1];
        num[b - 1] = t;
    }
    for (int i = 0; i < n; i++)
        cout << num[i] << ' ';
    return 0;
}