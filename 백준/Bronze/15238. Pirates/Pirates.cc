#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, maxn;
    vector<int> alpha(26, 0);
    string st;
    cin >> n >> st;
    for (int i = 0; i < n; i++)
        alpha[st[i] - 97] += 1;
    maxn = *max_element(alpha.begin(), alpha.end());
    for (int i = 0; i < 26; i++) {
        if (alpha[i] == maxn) {
            cout << char(97 + i) << ' ' << maxn;
            break;
        }
    }
    return 0;
}