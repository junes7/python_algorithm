#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    double v = 0.0;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        v = (1 - (1 - v / 100.0) * (1 - arr[i] / 100.0)) * 100;
        cout << fixed;
        cout.precision(6);
        cout << v << "\n";
    }
    return 0;
}