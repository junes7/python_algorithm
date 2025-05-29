#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t, n, get_max, maxn;
    vector<int> get(3);
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        get_max = 0;
        for (int j = 0; j < n; j++) {
            maxn = 0;
            for (int k = 0; k < 3; k++) {
                cin >> get[k];
                if (maxn < get[k])
                    maxn = get[k];
            }
            get_max += maxn;
        }
        cout << get_max << "\n";
    }
    return 0;
}