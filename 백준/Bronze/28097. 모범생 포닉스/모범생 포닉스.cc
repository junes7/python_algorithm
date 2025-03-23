#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, s = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        s += arr[i];
    }
    s += (n - 1) * 8;
    cout << s / 24 << ' ' << s % 24;
    return 0;
}