#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, price, cnt = 1;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(2, 0));
    for (int i = 0; i < n; i++)
        cin >> arr[i][0] >> arr[i][1];
    sort(arr.begin(), arr.end());
    price = arr[0][1];
    for (int i = 1; i < n; i++) {
        if (price > arr[i][1]) {
            price = arr[i][1];
            cnt += 1;
        }
    }
    cout << cnt;
    return 0;
}