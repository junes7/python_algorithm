#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int p, n, cnt = 0;
    cin >> p >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), less<int>());
    for (int i = 0; i < n; i++) {
        if (p >= 200) break;
        p += arr[i];
        cnt += 1;
    }
    cout << cnt;
    return 0;
}