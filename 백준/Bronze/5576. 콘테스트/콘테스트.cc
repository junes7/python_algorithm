#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int total_w = 0, total_k = 0;
    vector<int> w(10), k(10);
    for (int i = 0; i < 10; i++)
        cin >> w[i];
    for (int i = 0; i < 10; i++)
        cin >> k[i];
    sort(w.begin(), w.end(), greater<int>());
    sort(k.begin(), k.end(), greater<int>());
    for (int i = 0; i < 3; i++) {
        total_w += w[i];
        total_k += k[i];
    }
    cout << total_w << ' ' << total_k << "\n";
    return 0;
}