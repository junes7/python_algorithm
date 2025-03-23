#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, m, order, s = 0;
    cin >> n;
    vector<int> price(n);
    for (int i = 0; i < n; i++)
        cin >> price[i];
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> order;
        s += price[order - 1];
    }
    cout << s;
    return 0;
}