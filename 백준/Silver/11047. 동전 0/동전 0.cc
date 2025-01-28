#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, k, elem, cnt = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    vector<int> coins;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        coins.push_back(elem);
    }
    for (int i = n - 1; i >= 0; i--) {
        cnt += k / coins[i];
        k %= coins[i];
    }
    cout << cnt;
}