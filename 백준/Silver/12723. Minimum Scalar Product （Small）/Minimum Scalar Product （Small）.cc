#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t, n, total;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        vector<int> v1(n), v2(n);
        total = 0;
        for (int j = 0; j < n; j++)
            cin >> v1[j];
        for (int j = 0; j < n; j++)
            cin >> v2[j];
        sort(v1.begin(), v1.end(), less<int>());
        sort(v2.begin(), v2.end(), greater<int>());
        for (int j = 0; j < n; j++)
            total += v1[j] * v2[j];
        cout << "Case #" << i + 1 << ": " << total << "\n";
    }
    return 0;
}