#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, m, max_sum = 0, cur_sum;
    cin >> n >> m;
    vector<int> cards(n);
    for (int i = 0; i < n; i++)
        cin >> cards[i];
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                cur_sum = cards[i] + cards[j] + cards[k];
                if (cur_sum <= m)
                    max_sum = max(max_sum, cur_sum);
            }
        }
    }
    cout << max_sum;
    return 0;
}