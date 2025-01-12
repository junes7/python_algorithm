#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, m, i, j, k;
    cin >> n >> m;
    vector<int> num;
    for (int i = 0; i < n; i++) {
        num.push_back(0);
    }
    for (int l = 0; l < m; l++) {
        cin >> i >> j >> k;
        for (int o = i; o < j + 1; o++) {
            num[o - 1] = k;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << num[i] << ' ';
    }
    cout << endl;
    return 0;
}