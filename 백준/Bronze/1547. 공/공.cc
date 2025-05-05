#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int m, x, y, t;
    cin >> m;
    vector<int> cups = {0, 1, 2, 3};
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        t = cups[x];
        cups[x] = cups[y];
        cups[y] = t;
    }
    cout << find(cups.begin(), cups.end(), 1) - cups.begin();
    return 0;
}