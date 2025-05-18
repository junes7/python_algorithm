#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, m, maxh = 0, maxv = 0;
    cin >> n >> m;
    vector<int> helmets(n), vests(m);
    for (int i = 0; i < n; i++) {
        cin >> helmets[i];
        if (maxh < helmets[i]) maxh = helmets[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> vests[i];
        if (maxv < vests[i]) maxv = vests[i];
    }
    cout << maxh + maxv;
    return 0;
}