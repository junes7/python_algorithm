#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, rem, cnt = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> coins = {500, 100, 50, 10, 5, 1};
    cin >> n;
    rem = 1000 - n;
    for (int i = 0; i < coins.size(); i++) {
        cnt += rem / coins[i];
        rem %= coins[i];
    }
    cout << cnt;
    return 0;
}