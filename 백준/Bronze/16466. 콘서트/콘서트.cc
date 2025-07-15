#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    bool flag = true;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        if (i + 1 != arr[i]) {
            flag = false;
            cout << i + 1;
            break;
        }
    }
    if (flag) cout << n + 1;
    return 0;
}