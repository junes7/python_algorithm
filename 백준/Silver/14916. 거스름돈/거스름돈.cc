#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, cnt = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    vector<int> coins = {5, 2};
    if (n > coins[0]) {
        while (n % coins[0] > 0) {
            n -= coins[1];
            cnt += 1;
        }
    }
    for (int i = 0; i < coins.size(); i++) {
        cnt += n / coins[i];
        n %= coins[i];
    }
    cout << (n == 0 ? cnt : -1);
    return 0;
}