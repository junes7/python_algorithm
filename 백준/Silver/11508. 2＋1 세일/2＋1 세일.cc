#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, rlt = 0, total = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total += arr[i];
    }
    sort(arr.begin(), arr.end(), greater<int>());
    for (int i = 2; i < n; i = i + 3)
        rlt += arr[i];
    cout << total - rlt;
    return 0;
}