#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, m, x, y;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        for (int j = x - 1; j < y; j++)
            cout << arr[j] << "\n";
    }
    return 0;
}