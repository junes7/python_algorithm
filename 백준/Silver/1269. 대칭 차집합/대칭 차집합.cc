#include <iostream>
#include <set>
using namespace std;

int main(void) {
    int n, m, elem, cnt = 0;
    cin >> n >> m;
    set<int> a;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        a.insert(elem);
    }
    for (int i = 0; i < m; i++) {
        cin >> elem;
        if (a.find(elem) != a.end())
            cnt += 1;
    }
    cout << (n - cnt) + (m - cnt) << "\n";
    return 0;
}