#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t, n, k, s;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> k;
        s = 0;
        vector<int> arr(n);
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
            s += arr[j] / k;
        }
        cout << s << "\n";
    }
    return 0;
}