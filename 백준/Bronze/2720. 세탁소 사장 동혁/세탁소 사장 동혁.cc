#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, rem;
    vector<int> coins = {25, 10, 5, 1};
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> rem;
        for (int j = 0; j < coins.size(); j++) {
            cout << rem / coins[j] << ' ';
            rem %= coins[j];
        }
        cout << "\n";
    }
    return 0;
}