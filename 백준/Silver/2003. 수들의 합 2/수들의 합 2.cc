#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, m, start = 0, end = 0, sum_arr = 0, cnt = 0;
    vector<int> arr;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> cnt;
        arr.push_back(cnt);
    }
    cnt = 0;
    while (1) {
        if (m < sum_arr) {
            sum_arr -= arr[start++];
        } else {
            if (end == n)
                break;
            sum_arr += arr[end++];
        }
        if (m == sum_arr) cnt += 1;
    }
    cout << cnt;
    return 0;
}