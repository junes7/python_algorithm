#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, x, left = 0, right, sum_arr = 0, cnt = 0;
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr.push_back(x);
    }
    cin >> x;
    right = n - 1;
    sort(arr.begin(), arr.end(), less<int>());
    while (true) {
        if (left == right)
            break;
        sum_arr = arr[left] + arr[right];
        if (sum_arr <= x) {
            if (sum_arr == x)
                cnt += 1;
            sum_arr -= arr[left++];
        } else {
            sum_arr -= arr[right--];
        }
    }
    cout << cnt;
    return 0;
}